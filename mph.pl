package MinimalPerfectHash;
use strict;
use warnings;
use feature 'say';
use Carp;
use Text::Wrap;
use List::Util qw / min shuffle /;
use Data::Dumper; $Data::Dumper::Sortkeys = 1;

my $INF   = 1e9;
my $DEBUG= $ENV{DEBUG} || 0;
my $RSHIFT= 8;
my $FNV_CONST= 16777619;

sub _fnv {
    my ($key, $seed)= @_;

    my $hash = 0+$seed;
    foreach my $char (split //, $key) {
        $hash = $hash ^ ord($char);
        $hash = ($hash * $FNV_CONST) & 0xFFFFFFFF;
    }
    return $hash;
}

sub build_perfect_hash {
    my ($hash, $split_pos)= @_;

    my $n= 0+keys %$hash;
    my $max_h= 0xFFFFFFFF;
    $max_h -= $max_h % $n; # this just avoids a tiny bit bias
    my $seed1= unpack("N", "Perl") - 1;
    my $hash_to_key;
    my $key_to_hash;
    my $length_all_keys;
    my $key_buckets;
    SEED1:
    for ($seed1++;1;$seed1++) {
        my %hash_to_key;
        my %key_to_hash;
        my %key_buckets;
        my %high;
        $length_all_keys= 0;
        foreach my $key (sort keys %$hash) {
            $length_all_keys += length $key;
            my $h= _fnv($key,$seed1);
            next SEED1 if $h >= $max_h; # check if this hash would bias, and if so find a new seed
            next SEED1 if exists $hash_to_key{$h};
            next SEED1 if $high{$h >> $RSHIFT}++;
            $hash_to_key{$h}= $key;
            $key_to_hash{$key}= $h;
            push @{$key_buckets{$h % $n}}, $key;
        }
        $hash_to_key= \%hash_to_key;
        $key_to_hash= \%key_to_hash;
        $key_buckets= \%key_buckets;
        last SEED1;
    }

    my %token;
    my @first_level;
    my @second_level;
    foreach my $first_idx (sort { @{$key_buckets->{$b}} <=> @{$key_buckets->{$a}} || $a <=> $b } keys %$key_buckets) {
        my $keys= $key_buckets->{$first_idx};
        #printf "got %d keys in bucket %d\n", 0+@$keys, $first_idx;
        my $seed2;
        SEED2:
        for ($seed2=1;1;$seed2++) {
            goto FIND_SEED if $seed2 > 0xFFFF;
            my @idx= map {
                ( ( ( $key_to_hash->{$_} >> $RSHIFT ) ^ $seed2 ) & 0xFFFFFFFF ) % $n 
            } @$keys;
            my %seen;
            next SEED2 if grep { $second_level[$_] || $seen{$_}++ } @idx;
            $first_level[$first_idx]= $seed2;
            @second_level[@idx]= map {
                my $sp= $split_pos->{$_} // die "no split pos for '$_'";
                my ($prefix,$suffix)= unpack "A${sp}A*", $_;

                +{
                    key     => $_,
                    prefix  => $prefix,
                    suffix  => $suffix,
                    hash    => $key_to_hash->{$_},
                    value   => $hash->{$_},
                    seed2   => 0,
                }
            } @$keys;
            last;
        }

    }
    $second_level[$_]{seed2}= $first_level[$_]||0, $second_level[$_]{idx}= $_ for 0 .. $#second_level;

    return $seed1, \@second_level, $length_all_keys;
}

sub _smart_join {
    my ($words)= @_;
    my @words= @$words;
    my $changed= 1;
    while ($changed) {
        $changed= 0;
        my %suffix;
        foreach my $word (@words) {
            $suffix{substr($word,-$_)}{$word}++ for 1..length($word)-1;
        }
        my %by_best;
        my %all;
        foreach my $word (@words) {
            my $best={};
            my $best_prefix= "";
            for ( 1 .. length($word) -1 ) {
                my $prefix= substr($word,0,$_);
                if (keys %{$suffix{$prefix}} > keys %$best) {
                    $best_prefix= $prefix;
                    $best= $suffix{$prefix};
                }
            }
            $by_best{$best_prefix}{$word}=$best;
            $all{$word}++;
        }
        foreach my $prefix (sort { length($b) <=> length($a) || $a cmp $b } keys %by_best) {
            WORD:
            foreach my $word (sort { length($b) <=> length($a) || $a cmp $b } keys %{$by_best{$prefix}}) {
                next unless $all{$word};
                foreach my $other (sort { length($b) <=> length($a) || $a cmp $b } keys %{$by_best{$prefix}{$word}}) {
                    next if !$all{$other} or $word eq $other;
                    my $merge= $other . substr($word,length($prefix));
                    delete $by_best{$prefix}{$word}{$other};
                    delete $all{$other};
                    delete $all{$word};
                    $all{$merge}++;
                    $changed++;
                    #print "merged: $other $word => $merge\n";
                    next WORD;
                }

            }
        }
        @words= keys %all;
    }
    my $ret= join "", sort { length($a) <=> length($b) || $a cmp $b }
                      @words;
    #my $orig= join "", sort { length($a) <=> length($b) || $a cmp $b } @$words;
    #printf "join_squeeze removed %d chars\n", length($orig)-length($ret) if length($orig)-length($ret)>0;
    return $ret;
}

sub _build_seen_and_parts {
    my ($hash)= @_;

    my %parts;
    my %seen;
    my @included;
    foreach my $key (sort { length($b) <=> length($a) || $a cmp $b } keys %$hash) {
        next if length($key)<=4;
        push @included, $key;
        $seen{$key}++;
        for (my $len= length($key)-2; $len>=2; $len--) {
            my ($l,$r)= unpack "A${len}A*", $key;
            push @{$parts{$key}},[$l,$r];
            $seen{$l}++ if length($r) == 2;
            $seen{$r}++ if length($l) == 2;
        }
    }
    return (\%parts, \%seen, \@included);
}
sub _build_covers_from_seen {
    my ($seen)= @_;
    my $covers;
    my $rcovers;
    use Sereal::Encoder qw(encode_sereal);
    use Sereal::Decoder qw(decode_sereal);
    my $covers_file= "covers.srl";
    if (!-e $covers_file) {
        my %covers;
        my %rcovers;
        my @seen= sort { length($b) <=> length($a) || $a cmp $b } keys %$seen;
        my @rseen= reverse @seen;
        foreach my $key (@seen) {
            foreach my $okey (@rseen) {
                last if length $okey > length $key;
                if (index($key,$okey)>=0) {
                    $covers{$key}{$okey}++;
                    $rcovers{$okey}{$key}++;
                }
            }
            printf "%s covers %d\n",$key, 0+keys(%{$covers{$key}});
        }
        open my $fh, ">", $covers_file or die "$covers_file: $!";
        print $fh encode_sereal({covers=>\%covers,rcovers=>\%rcovers});
        close $fh;
        $covers= \%covers;
        $rcovers= \%rcovers;
    } else {
        open my $fh, "<", $covers_file or die "$covers_file: $!";
        my $enc= do { local $/; <$fh> };
        my $data= decode_sereal($enc);
        $rcovers= $data->{rcovers};
        $covers= $data->{covers};
    }
    return ($covers,$rcovers);
}

sub _build_initial_buf {
    my ($hash,$seen,$key_parts)= @_;

    my $buf="";
    if (-e "covers.buf"){
        open my $fh, "<", "covers.buf" or die "covers.buf:$!";
        $buf= do { local $/; <$fh> };
        close $fh;
        return $buf;
    }
    my ($covers,$rcovers)= _build_covers_from_seen($seen);
    my %copy= %$hash;
    my @keys;
    my $sortkeys= sub {
        @keys= sort { 
            (keys(%{$covers->{$b}||{}})*(length($b))) <=> (keys(%{$covers->{$a}||{}})*(length($a))) || 
            (keys(%{$covers->{$b}||{}})) <=> (keys(%{$covers->{$a}||{}})) || 
            length($b) <=> length($a) || 
            $a cmp $b
        } keys %copy;
    };
    $sortkeys->();

    print "-- computing initial buffer\n";
    KEY:
    while (@keys) {
        my ($key)= shift @keys;
        delete $copy{$key};
        next unless length($key) > 4;
        if (index($buf,$key) >= 0) {
            next;
        }
        my $best_append;
        foreach my $part (@{$key_parts->{$key}}) {
            my ($l,$r)= @$part;
            my $lidx= length($l)<=2 ? 0 : index($buf,$l);
            my $ridx= length($r)<=2 ? 0 : index($buf,$r);
            if ($lidx>=0 and $ridx>=0) {
                next KEY;
            } elsif ($lidx>=0 or $ridx>=0) {
                my $append;
                if ($lidx>=0) {
                    $append= $r;
                } else {
                    $append= $l;
                }
                $best_append //= $append;
                $best_append = $append if length($best_append) > length($append);
            }
        }
        printf "%s: %d | %s: %d\n", $key, 0+keys(%{$covers->{$key}||{}}), $best_append//"", 0+keys(%{$covers->{$best_append}||{}});
        if ( 1 or 0+keys(%{$covers->{$key}||{}}) >= 3 ) {
            $best_append= $key;
        }
        $buf .= "!".$best_append;

        foreach my $sub_key (keys %{$covers->{$key}||{}}) {
            foreach my $okey (keys %{$rcovers->{$sub_key}||{}}) {
                delete $covers->{$okey}{$sub_key};
            }
            delete $covers->{$sub_key};
            delete $rcovers->{$sub_key};
        }
        delete $covers->{$key};
        delete $rcovers->{$key};
        $sortkeys->();
    }
    open my $fh, ">", "covers.buf" or die "covers.buf:$!";
    print $fh $buf;
    close $fh;
    return $buf;
}

sub _remove_unused_chars {
    my ($buf, $hash, $key_parts)= @_;

    my $sentinal= index($buf,"--");
    my @used= (0) x length $buf;
    foreach my $key (
        sort { length($b) <=> length($a) || $a cmp $b } keys %$hash
    ) {
        next unless length($key) > 4;
        my ($best_l,$best_r,$best_lidx,$best_ridx,$best_eidx);
        my %left;
        my %right;
        my %add;
        foreach my $part ( @{$key_parts->{$key}} ) {
            my ($l,$r)= @$part;
            my $lidx= length($l)<=2 ? $sentinal : index($buf,$l);
            my $ridx= length($r)<=2 ? $sentinal : index($buf,$r);
            my $eidx= $ridx + length($r);
            if ($lidx>=0 and $ridx>=0
                and (!defined($best_l) or $best_lidx != $lidx or $best_ridx != $ridx)
            ) {
                $best_l= $l;
                $best_r= $r;
                $best_lidx= $lidx;
                $best_ridx= $ridx;
                $best_eidx= $eidx;
                #print "$key | $l | $r | $lidx | $eidx\n";
                $left{$lidx}=$l if length($left{$lidx}||"") < length($l);
                $right{$eidx}=$r if length($right{$eidx}||"") < length($r);
            }
        }
        die "Failed to match $key in $buf" if !keys %left or !keys %right;
        for my $eidx (keys %right) {
            my $str= $right{$eidx};
            my $lidx= $eidx - length($str);
            $add{$_}++ for $lidx .. ($lidx+length($str)-1);
        }
        foreach my $lidx (keys %left) {
            my $str= $left{$lidx};
            $add{$_}++ for $lidx .. ($lidx+length($str)-1);
        }
        for (keys %add) {
            $used[$_]++;
        }
    }
    my @crossed=(0) x @used;
    my @final_used=(0) x @used;
    foreach my $key (
        sort { length($b) <=> length($a) || $a cmp $b } keys %$hash
    ) {
        if (length($key) <= 4) {
            next;
        }
        my ($best_l,$best_r,$best_lidx,$best_ridx,$best_eidx,$best_score,$best_min);
        foreach my $part (@{$key_parts->{$key}}) {
            my ($l,$r)= @$part;
            my $lidx= length($l)<=2 ? $sentinal : index($buf,$l);
            my $ridx= length($r)<=2 ? $sentinal : index($buf,$r);
            next if $lidx<0 or $ridx<0;
            my $score= 0;
            my $min;
            my $len;
            if ($lidx < $sentinal) {
                $len += length($l);
                $min //= $used[$lidx];
                foreach my $idx ($lidx .. $lidx+length($l)-1) {
                    $score += $used[$idx];
                    $min= $used[$idx] if $score < $used[$idx];
                }
            }
            if ($ridx<$sentinal) {
                $len += length($r);
                $min //= $used[$ridx];
                foreach my $idx ($ridx .. $ridx+length($r)-1) {
                    $score += $used[$idx];
                    $min= $used[$idx] if $used[$idx] < $min;
                }
            }
            $score /= $len;
            my $scorep= sprintf "%.4f", $score;
            my $eidx= $ridx + length($r);
            if (
                $lidx>=0 and $ridx>=0 and
                ( !defined($best_score) or ($score > $best_score) )
            ) {
                $best_l= $l;
                $best_r= $r;
                $best_lidx= $lidx;
                $best_ridx= $ridx;
                $best_eidx= $eidx;
                $best_score= $score;
                $best_min= $min;
                #print "$key = $l | $r | $lidx | $eidx | $scorep\n";
            }
        }
        if (!defined $best_score) {
            die "No best for '$key'";
        }

        foreach my $idx ($best_lidx .. $best_lidx+length($best_l)-1) {
            $crossed[$idx]++ if $idx>$best_lidx;
            $final_used[$idx]++;
        }
        foreach my $idx ($best_ridx .. $best_ridx+length($best_r)-1) {
            $crossed[$idx]++ if $idx>$best_ridx;
            $final_used[$idx]++;
        }
    }
    return _remove_unused_final($buf, \@final_used, \@crossed);
}

sub _remove_unused_final {
    my ($buf, $final_used, $crossed)= @_;
    my @parts= ("");
    my @score= (0);
    foreach my $i (0 .. $#$final_used) {
        if ($final_used->[$i]) {
            if (1 and !$crossed->[$i] and length $parts[-1]) {
                push @parts, "";
                push @score, 0;
            }
            $parts[-1] .= substr($buf,$i,1);
            $score[-1] += $final_used->[$i];
        } elsif (length $parts[-1]) {
            push @parts, "";
            push @score, 0;
        }
    }
    unless (length $parts[-1]) {
        pop @parts;
        pop @score;
    }
    $parts[-1]=~s/--\z//;
    unless (length $parts[-1]) {
        pop @parts;
        pop @score;
    }
    my $new_buf= _smart_join(\@parts);
    return $new_buf;
}

sub _write_best_buf {
    my ($workdir, $best_buf)= @_;
    my $file= sprintf "%s/best.%d", $workdir, length($best_buf);
    return if -e $file;
    open my $fh, ">", "$file.$$.tmp" or die "error writing '$file.$$.tmp': $!";
    print $fh $best_buf;
    close $fh;
    rename "$file.$$.tmp", "$file.buf"
        or die "Failed to rename '$file.$$.tmp' to '$file.buf': $!";
}

sub _find_best_buf {
    my ($workdir)= @_;
    my @files= glob "$workdir/best.*.buf";
    (@files)= sort { $a->[1] <=> $b->[1] } map { /best\.(\d+)\./ ? [$_,$1] : () } @files;
    my $best_file= $files[0][0];
    open my $fh, "<", $best_file or die "failed to open '$best_file': $!";
    my $buf= do {local $/; <$fh>};
    return $buf
}

sub _compute_leftmost_longest {
    my ($buf, $hash, $key_parts)= @_;
    my %split_point;
    my @bad;
    my $key_length= 0;
    KEY:
    foreach my $key (keys %$hash) {
        $key_length += length($key);
        if (length($key) <= 4) {
            if (index($buf,$key)>=0) {
                $split_point{$key}=length($key);
            } else {
                $split_point{$key}= int((length($key)+0.5)/2);
            }
        } else {
            foreach my $part (@{$key_parts->{$key}}) {
                my ($l,$r)= @$part;
                my $lidx= length($l)<=2 ? 0 : index($buf,$l);
                my $ridx= length($r)<=2 ? 0 : index($buf,$r);
                if ($lidx>=0 and $ridx>=0) {
                    $split_point{$key}= length($l);
                    next KEY;
                }
            }
            push @bad, $key;
        }
    }
    if (@bad) {
        warn sprintf "Failed to compute splitpoint for %d keys: %s", 0+@bad, join ", ", @bad;
    }
    return \%split_point;
}

sub build_split_words_new {
    my ($hash, $preprocess, $blob, $old_res)= @_;
    $|++;
    my ($parts,$seen,$included)= _build_seen_and_parts($hash);
    my ($buf)= _build_initial_buf($hash,$seen,$parts);
    @$included= shuffle @$included;

    my $is_longer= 0;
    my $iters= 0;
    my $best_buf= "";
    my $prepend_word= "";
    my $workdir= $ENV{WORKDIR} || "best_test4";
    -d $workdir or
        mkdir $workdir
            or die "failed to create dir '$workdir': $!";
    _write_best_buf($workdir,$buf);

    my $max_count= $ENV{MAX_COUNT} ? $ENV{MAX_COUNT} : 0+@$included;
    COMPRESS:
    for ($iters=0; $is_longer < $max_count; $iters++ ) {
        $best_buf= _find_best_buf($workdir);
        my $buf = $prepend_word . $best_buf . "--";
        $buf= _remove_unused_chars($buf, $hash, $parts);
        my $is_winner= 0;
        if ( length($buf) < length($best_buf) ) {
            if ($is_longer or !$iters) {
                @$included= shuffle @$included;
                $is_longer= 0;
            }
            _write_best_buf($workdir, $buf);
            $is_winner= 1;
        } else {
            $is_longer++;
        }
        printf "%sdelta: %5d, length: %5d -> %5d - %6.2f%% [%4d/%4d/%4d] %s\n",
            $is_winner ? "<" : ">",
            length($buf) - length($best_buf),
            length($best_buf), length($buf), length($buf)/length($best_buf)*100,
            $is_longer, 0+keys %$hash, $iters, $prepend_word;

        $prepend_word= $included->[$iters % @$included];
    }
    $best_buf= _find_best_buf($workdir);
    my ($split_point, $key_len)= _compute_leftmost_longest($best_buf, $hash, $parts);

    return $best_buf, $split_point;
}

sub build_split_words {
    my ($hash, $preprocess, $blob, $old_res)= @_;
    $|++;

    my $score;
    my %appended;
    $blob //= "";
    if ($preprocess) {
        my %parts;
        foreach my $key (sort {length($b) <=> length($a) || $a cmp $b } keys %$hash) {
            my ($prefix,$suffix);
            if ($key=~/^([^=]+=)([^=]+)\z/) {
                ($prefix,$suffix)= ($1, $2);
                $parts{$suffix}++;
                #$parts{$prefix}++;
            } else {
                $prefix= $key;
                $parts{$prefix}++;
            }

        }
        foreach my $key (sort {length($b) <=> length($a) || $a cmp $b } keys %parts) {
            $blob .= $key . "\0";
        }
        printf "Using preprocessing, initial blob size %d\n", length($blob) if $DEBUG;
    } else {
        printf "No preprocessing, initial blob size %d\n", length($blob) if $DEBUG;
    }
    my %res;
    my $count;

    REDO:
    %res= ();
    $count= 0;

    KEY:
    foreach my $key (
        sort {
            (($score->{$b}//=0) <=> ($score->{$a}//=0)) ||
            (length($b) <=> length($a)) ||
            ($a cmp $b)
        }
        keys %$hash
    ) {
        next if exists $res{$key};
        if (index($blob,$key) >= 0 ) {
            my $idx= length($key);
            if ($DEBUG and $old_res and $old_res->{$key} != $idx) {
                print "changing: $key => $old_res->{$key} : $idx\n";
            }
            $res{$key}= $idx;
            next KEY;
        }
        my $best= length($key);
        my $append= $key;
        my $best_prefix;
        my $best_suffix;
        my $min= $count++ < 10 ? 4 : 0;
        foreach my $idx (reverse 0 .. length($key)) {
            my $prefix= substr($key,0,$idx);
            my $suffix= substr($key,$idx);
            next if (length($prefix) and length($prefix)<$min) or (length($suffix) and length($suffix)<$min);
            my $i1= index($blob,$prefix)>=0;
            my $i2= index($blob,$suffix)>=0;
            if ($i1 and $i2) {
                if ($DEBUG and $old_res and $old_res->{$key} != $idx) {
                    print "changing: $key => $old_res->{$key} : $idx\n";
                }
                $res{$key}= $idx;
                $appended{$prefix}++;
                $appended{$suffix}++;
                next KEY;
            } elsif ($i1) {
                if (length $suffix <= length $append) {
                    $best= $idx;
                    $append= $suffix;
                    $best_prefix= $prefix;
                    $best_suffix= $suffix;
                }
            } elsif ($i2) {
                if (length $prefix <= length $append) {
                    $best= $idx;
                    $append= $prefix;
                    $best_prefix= $prefix;
                    $best_suffix= $suffix;
                }
            }
        }
        if ($DEBUG and $old_res and $old_res->{$key} != $best) {
            print "changing: $key => $old_res->{$key} : $best\n";
        }
        $res{$key}= $best;

        my $cut=0;
        for my $i (1..length($append)) {
            if (substr($append,0,$i) eq substr($blob,-$i)) {
                $cut=$i;
            } else {
                last;
            }
        }
        if ($cut) {
            $append= substr($append,$cut);
            $blob .= $append;
        } else {
            for my $i (1 .. length($append)) {
                if (substr($append,-$i) eq substr($blob,0,$i)) {
                    $cut=$i;
                } else {
                    last;
                }
            }
            if ($cut) {
                $append= substr($append,0,$cut);
                $blob= $append . $blob;
            } else {
                $blob .= $append;
            }
        }

    
        print "$best_prefix|$best_suffix => $best => $append\n" if $DEBUG;
        $appended{$best_prefix}++;
        $appended{$best_suffix}++;
    }
    my $b2 = "";
    foreach my $key (sort { length($b) <=> length($a) || $a cmp $b } keys %appended) {
        $b2 .= $key unless index($b2,$key)>=0;
    }
    if (length($b2)<length($blob)) {
        printf "Length old blob: %d length new blob: %d, recomputing using new blob\n", length($blob),length($b2)
            if $DEBUG;
        $blob= $b2;
        %appended=();
        goto REDO;
    } else {
        printf "Length old blob: %d length new blob: %d, keeping old blob\n", length($blob),length($b2)
            if $DEBUG;
    }
    die sprintf "not same size? %d != %d", 0+keys %res, 0+keys %$hash unless keys %res == keys %$hash;
    return ($blob,\%res);
}


sub get_occurrences {
    my ( $occurrences_mem, $sref, $wref ) = @_;
    confess("not a hash") unless ref $occurrences_mem eq "HASH";
    return $occurrences_mem->{$$wref} if defined $occurrences_mem->{$$wref};

    my $occurrences = [];
    my $from        = 0;

    while (1) {
        my $i = index( $$sref, $$wref, $from );
        last if $i == -1;
        push @$occurrences, $i;
        $from = $i + 1;
    }

    $occurrences_mem->{$$wref} = $occurrences;
    return $occurrences;
}

sub change_popularity {
    my ( $popularity, $i, $len, $diff ) = @_;
    for ( $i .. $i + $len - 1 ) {
        $popularity->[$_] += $diff;
    }
}

sub get_popularity {
    my ( $popularity, $i, $len ) = @_;
    my $res = {
        reused_digits => 0,
        popularity    => 0,
    };
    my $min_pop = undef;
    for ( $i .. $i + $len - 1 ) {
        if ( $popularity->[$_] > $INF - 1 ) {
            $res->{reused_digits}++;
        }
        else {
            my $pop = $popularity->[$_];
            if ( !defined $min_pop || $pop < $min_pop ) {
                $min_pop = $pop;
            }
        }
    }
    $res->{popularity} = $min_pop // 0;
    return $res;
}

sub merge_score {
    my ( $s1, $s2 ) = @_;
    return {
        reused_digits => $s1->{reused_digits} + $s2->{reused_digits},
        popularity    => min( $s1->{popularity}, $s2->{popularity} ),
    };
}

sub change_all_popularities {
    my ( $occurences_mem, $popularity, $sref, $wref, $diff ) = @_;
    my $occurrences = get_occurrences( $occurences_mem, $sref, $wref );
    my $wlen = length $$wref;
    for my $i (@$occurrences) {
        for ( $i .. $i + $wlen - 1 ) {
            $popularity->[$_] += $diff;
        }
    }
}

sub compare_score {
    my ( $s1, $s2 ) = @_;
    if ( $s1->{reused_digits} != $s2->{reused_digits} ) {
        return $s1->{reused_digits} <=> $s2->{reused_digits};
    }
    return $s1->{popularity} <=> $s2->{popularity};
}

sub get_most_popular_position {
    my ( $occurences_mem, $popularity, $sref, $wref ) = @_;
    my $best_score = {
        reused_digits => -1,
        popularity    => -1,
    };
    my $best_pos    = -1;
    my $occurrences = get_occurrences( $occurences_mem, $sref, $wref );
    my $wlen        = length $$wref;
    for my $i (@$occurrences) {
        my $score = get_popularity( $popularity, $i, $wlen );
        if ( compare_score( $score, $best_score ) > 0 ) {
            $best_score = $score;
            $best_pos   = $i;
            if ( $best_score->{reused_digits} == $wlen ) {
                last;
            }
        }
    }
    return {
        position => $best_pos,
        score    => $best_score,
    };
}

sub squeeze {
    my ($words, $splits, $sref) = @_;
    say("Squeezing...") if $DEBUG;
    my %occurrences_mem;
    my %split_points;
    my $n = length $$sref;
    my @popularity = 0 x $n;

    my %wcount;
    for my $word (@$words) {
        $wcount{$word}++;
        for my $split ( @{ $splits->{$word} } ) {
            $wcount{ $split->{w1} }++;
            $wcount{ $split->{w2} }++;
        }
    }

    for my $w ( sort keys %wcount ) {
        my $cnt = $wcount{$w};
        change_all_popularities( \%occurrences_mem, \@popularity, $sref, \$w, $cnt / length($w) );
    }

    WORD:
    for my $word (@$words) {
        my $best_pos1  = -1;
        my $best_pos2  = -1;
        my $best_score = {
            reused_digits => -1,
            popularity    => -1,
        };
        my $best_split = undef;


        {
            my $cand = get_most_popular_position( \%occurrences_mem, \@popularity, $sref, \$word );
            if ( $cand->{position} != -1 ) {
                my $cand_score = $cand->{score};
                if ( $cand_score->{reused_digits} == length($word) ) {
                    $split_points{$word} = 0;
                    next WORD;
                }
                elsif ( compare_score( $cand_score, $best_score ) > 0 ) {
                    $best_score = $cand_score;
                    $best_pos1  = $cand->{position};
                    $best_pos2  = -1;
                    $best_split = undef;
                }
            }
        }

        for my $split ( @{ $splits->{$word} } ) {
            my $cand2 = get_most_popular_position( \%occurrences_mem, \@popularity, $sref, \$split->{w2} );
            if ( $cand2->{position} != -1 ) {
                my $cand1 = get_most_popular_position( \%occurrences_mem, \@popularity, $sref, \$split->{w1} );
                if ( $cand1->{position} != -1 ) {
                    my $cand_score =
                      merge_score( $cand1->{score}, $cand2->{score} );
                    if ( $cand_score->{reused_digits} == length($word) ) {
                        $split_points{$word} = $split->{split_point};
                        next WORD;
                    }
                    if ( compare_score( $cand_score, $best_score ) > 0 ) {
                        $best_score = $cand_score;
                        $best_pos1  = $cand1->{position};
                        $best_pos2  = $cand2->{position};
                        $best_split = $split;
                    }
                }
            }
        }

        # apply high pop to used characters of the champion
        if ( defined $best_split ) {
            change_popularity( \@popularity, $best_pos1, length( $best_split->{w1} ), $INF );
            change_popularity( \@popularity, $best_pos2, length( $best_split->{w2} ), $INF );
            $split_points{$word} = $best_split->{split_point};
        }
        else {
            change_popularity( \@popularity, $best_pos1, length($word), $INF );
            $split_points{$word} = 0;
        }
    }

    my $res = "";
    my @chars = split '', $$sref;
    for my $i ( 0 .. $n - 1 ) {
        if ( $popularity[$i] > $INF - 1 ) {
            $res .= $chars[$i];
        }
    }
    say( $n. '->' . ( length $res ) ) if $DEBUG;

    # ilya's algorithm chooses to "split" full strings at 0, so that the prefix is empty
    # and the suffix contains the full key, mph wants it the other way around, as we do
    # the prefix check first. so we correct it at the end here.
    $split_points{$_} ||= length($_) for keys %split_points;

    return ($res, \%split_points);
}

sub get_words_combination {
    my ($words,$splits)= @_;
    my $res = "";
    WORD:
    for my $word (@$words) {
        if ( index( $res, $word ) != -1 ) {
            next WORD;
        }
        else {
            for my $split ( @{ $splits->{$word} } ) {
                if (   index( $res, $split->{w1} ) != -1
                    && index( $res, $split->{w2} ) != -1 )
                {
                    next WORD;
                }
            }
        }
        $res .= $word;
    }
    return $res;
}

sub build_split_words_ilya {
    my ($h,$s) = @_;
    #srand(22);

    my @words= sort keys %$h;
    my %splits;
    my $split_points;
    
    for my $word (@words) {
        my $word_splits = [];
        my $wlen        = length $word;
        for my $i ( 1 .. $wlen - 1 ) {
            push @$word_splits,
              {
                w1          => substr( $word, 0, $i ),
                w2          => substr( $word, $i ),
                split_point => $i,
              };
        }
        $splits{$word} = $word_splits;
    }

    @words = sort { length($a) <=> length($b) || $a cmp $b } @words;
    $s = get_words_combination(\@words,\%splits);

    say($s) if $DEBUG;
    say( length $s ) if $DEBUG;

     while (1) {
        @words = reverse @words;
        my ($new_s, $new_split_points)= squeeze( \@words, \%splits, \$s );
        if (!$split_points || length($new_s) < length($s)) {
            $s= $new_s;
            $split_points= $new_split_points;
        } else {
            last;
        }
    }

    my $same= 0;
    my $max_same= $ENV{MAX_SAME} || 5;
    my $counter= 0;
    while ($ENV{RANDOMIZE} && $same < $max_same) {
        if (++$counter) {
            @words = shuffle @words;
        } else {
            @words = reverse @words;
        }
        my ($new_s,$new_split_points) = squeeze(\@words, \%splits, \$s);
        if (length($s) > length($new_s)) {
            $s = $new_s;
            $split_points= $new_split_points;
            $same= 0;
        } elsif (length($s) <= length($new_s)) {
            $same++;
        }
    }

    say $s if $DEBUG;
    say( "Result: " . length($s) ) if $DEBUG;

    return $s, $split_points;
}




sub blob_as_code {
    my ($blob,$blob_name)= @_;

    $blob_name ||= "mph_blob";

    # output the blob as C code.
    my @code= (sprintf "const unsigned char %s[] =\n",$blob_name);
    my $blob_len= length $blob;
    while (length($blob)) {
        push @code, sprintf qq(    "%s"), substr($blob,0,65,"");
        push @code, length $blob ? "\n" : ";\n";
    }
    push @code, "/* $blob_name length: $blob_len */\n";
    return join "",@code;
}

sub print_includes {
    my $ofh= shift;
    print $ofh "#include <stdio.h>\n";
    print $ofh "#include <string.h>\n";
    print $ofh "#include <stdint.h>\n";
    print $ofh "\n";
}

sub print_defines {
    my ($ofh,$defines)= @_;

    my $key_len;
    foreach my $def (keys %$defines) {
        $key_len //= length $def;
        $key_len= length $def if $key_len < length $def;
    }
    foreach my $def (sort keys %$defines) {
        printf $ofh "#define %*s %5d\n", -$key_len, $def, $defines->{$def};
    }
    print $ofh "\n";
}

sub _index {
    my ($blob,$part)= @_;
    my $res=
        length($part) == 0 ? 0 :
        length($part) == 1 ? ord($part) :
        length($part) == 2 ? unpack("v",$part) :
        index($blob,$part);
    if ($res<0) { warn "failed to find '$part'" }
    return $res;
}

sub build_array_of_struct {
    my ($second_level,$blob)= @_;

    my %defines;
    my %tests;
    my @rows;
    foreach my $row (@$second_level) {
        $defines{$row->{value}}= $row->{idx}+1;
        $tests{$row->{key}}= $defines{$row->{value}};
        my @u16= (
            $row->{seed2},
            _index($blob,$row->{prefix}//""),
            _index($blob,$row->{suffix}//""),
        );
        $_ > 0xFFFF and die "panic: value exceeds range of uint16_t"
            for @u16;
        my @u8= (
            length($row->{prefix}),
            length($row->{suffix}),
        );
        $_ > 0xFF and die "panic: value exceeds range of uint8_t"
            for @u8;
        push @rows, sprintf("  { %5d, %5d, %5d, %3d, %3d, %s }",
            @u16, @u8, $row->{value} );
    }
    return \@rows,\%defines,\%tests;
}

sub print_algo {
    my ($ofh, $second_level, $seed1, $length_all_keys, $smart_blob, $rows,
        $blob_name, $struct_name, $table_name, $match_name, $prefix) = @_;

    $blob_name ||= "mph_blob";
    $struct_name ||= "mph_struct";
    $table_name ||= "mph_table";
    $prefix ||= "MPH";

    if (!ref $ofh) {
        my $file= $ofh;
        undef $ofh;
        open $ofh, ">", $file
            or die "Failed to open '$file': $!";
    }

    my $n= 0+@$second_level;
    my $data_size= 0+@$second_level * 8 + length $smart_blob;

    print $ofh "/*\n";
    printf $ofh "rows: %s\n", $n;
    printf $ofh "seed: %s\n", $seed1;
    printf $ofh "full length of keys: %d\n", $length_all_keys;
    printf $ofh "blob length: %d\n", length $smart_blob;
    printf $ofh "ref length: %d\n", 0+@$second_level * 8;
    printf $ofh "data size: %d (%%%.2f)\n", $data_size, ($data_size / $length_all_keys) * 100;
    print $ofh "*/\n\n";

    print $ofh blob_as_code($smart_blob, $blob_name);
    print $ofh <<"EOF_CODE";

struct $struct_name {
    uint16_t seed2;
    uint16_t pfx;
    uint16_t sfx;
    uint8_t  pfx_len;
    uint8_t  sfx_len;
    ${prefix}_VALt value;
};

EOF_CODE

    print $ofh "#define ${prefix}_RSHIFT $RSHIFT\n";
    print $ofh "#define ${prefix}_BUCKETS $n\n\n";
    printf $ofh "const uint32_t ${prefix}_SEED1 = 0x%08x;\n", $seed1;
    printf $ofh "const uint32_t ${prefix}_FNV_CONST = 0x%08x;\n\n", $FNV_CONST;

    print $ofh "\n";
    print $ofh "const struct $struct_name $table_name\[${prefix}_BUCKETS] = {\n", join(",\n", @$rows)."\n};\n\n";
    print $ofh <<"EOF_CODE";
#define CHECK(blob_start,cmp_start,ofs,len) \\
    (((len) > 2) ? ( memcmp((blob_start)+(ofs),(cmp_start),(len)) == 0 ) : \\
     ((len) > 1) ? (((uint16_t*)(cmp_start))[0] == (ofs)) : \\
      ((!(len)) || ((cmp_start)[0] == (ofs))))
${prefix}_VALt $match_name( const unsigned char * const key, const uint16_t key_len ) {
    const unsigned char * ptr= key;
    const unsigned char * ptr_end= key + key_len;
    uint32_t h= ${prefix}_SEED1;
    uint32_t s;
    uint32_t n;
    do {
        h ^= *ptr;
        h *= ${prefix}_FNV_CONST;
    } while ( ++ptr < ptr_end );
    n= h % ${prefix}_BUCKETS;
    s = $table_name\[n].seed2;
    if (s) {
        h= (h >> ${prefix}_RSHIFT) ^ s;
        n = h % ${prefix}_BUCKETS;
        if (
            ( $table_name\[n].pfx_len + $table_name\[n].sfx_len == key_len ) &&
            CHECK($blob_name,key,$table_name\[n].pfx,$table_name\[n].pfx_len) &&
            CHECK($blob_name,key+$table_name\[n].pfx_len,$table_name\[n].sfx,$table_name\[n].sfx_len)
        ) {
            return $table_name\[n].value;
        }
    }
    return 0;
}
EOF_CODE
}

sub print_main {
    my ($ofh,$h_file,$match_name,$prefix)=@_;
    print $ofh <<"EOF_CODE";
#define ${prefix}_VALt int16_t
#include "$h_file"

int main(int argc, char *argv[]){
    int i;
    for (i=1; i<argc; i++) {
        unsigned char *key = (unsigned char *)argv[i];
        int key_len = strlen(argv[i]);
        printf("key: %s got: %d\\n", key, $match_name((unsigned char *)key,key_len));
    }
    return 0;
}
EOF_CODE
}

# output the test Perl code.
sub print_tests {
    my ($file, $tests_hash)= @_;
    open my $ofh, ">", $file
        or die "Failed to open '$file' for writing: $!";
    my $num_tests= 2 + keys %$tests_hash;
    print $ofh "use strict;\nuse warnings;\nuse Test::More tests => $num_tests;\nmy \@res;";
    my $bytes= 0;
    my @tests= sort keys %$tests_hash;
    print $ofh "\@res=`./mph_test '$tests[0]/should-not-match' 'should-not-match/$tests[0]'`;\n";
    print $ofh "ok( \$res[0] =~ /got: 0/,'proper prefix does not match');\n";
    print $ofh "ok( \$res[1] =~ /got: 0/,'proper suffix does not match');\n";
    while (@tests) {
        my @batch= splice @tests,0,10;
        my $batch_args= join " ", map { "'$_'" } @batch;
        print $ofh "\@res=`./mph_test $batch_args`;\n";
        foreach my $i (0..$#batch) {
            my $key= $batch[$i];
            my $want= $tests_hash->{$key};
            print $ofh "ok(\$res[$i]=~/got: (\\d+)/ && \$1 == $want, '$key');\n";
        }
    }
    close $ofh;
}

sub print_test_binary {
    my ($file,$h_file, $second_level, $seed1, $length_all_keys,
        $smart_blob, $rows, $defines, $match_name, $prefix)= @_;
    open my $ofh, ">", $file
        or die "Failed to open '$file': $!";
    print_includes($ofh);
    print_defines($ofh, $defines);
    print_main($ofh,$h_file,$match_name,$prefix);
    close $ofh;
}

sub make_mph_from_hash {
    my $hash= shift;

    # we do this twice because often we can find longer prefixes on the second pass.
    my @keys= sort {length($b) <=> length($a) || $a cmp $b } keys %$hash;

    my @tuples;
    push @tuples, ["yves",build_split_words_new($hash)];
    #push @tuples, ["ilya",build_split_words_ilya($hash)];

    @tuples= sort {length($a->[1])<=>length($b->[1])} @tuples;
    if ($DEBUG) {
        printf "strategy: %s length %d\n", $_->[0], length($_->[1])
            for @tuples;
    }

    my ($strategy, $blob, $split_points)= @{$tuples[0]};
    my ($seed1, $second_level, $length_all_keys)= build_perfect_hash($hash, $split_points);
    my ($rows, $defines, $tests)= build_array_of_struct($second_level, $blob);
    return ($second_level, $seed1, $length_all_keys, $blob, $rows, $defines, $tests);
}

sub make_files {
    my ($hash,$base_name)= @_;

    my $h_name= $base_name . "_algo.h";
    my $c_name= $base_name . "_test.c";
    my $p_name= $base_name . "_test.pl";
    my $blob_name= $base_name . "_blob";
    my $struct_name= $base_name . "_bucket_info";
    my $table_name= $base_name . "_table";
    my $match_name= $base_name . "_match";
    my $prefix= uc($base_name);

    my ($second_level, $seed1, $length_all_keys,
        $smart_blob, $rows, $defines, $tests)= make_mph_from_hash( $hash );
    print_algo( $h_name,
        $second_level, $seed1, $length_all_keys, $smart_blob, $rows,
        $blob_name, $struct_name, $table_name, $match_name, $prefix );
    print_test_binary( $c_name, $h_name, $second_level, $seed1, $length_all_keys,
        $smart_blob, $rows, $defines,
        $match_name, $prefix );
    print_tests( $p_name, $tests );
}

unless (caller) {
    if ($ENV{SRAND}) {
        srand($ENV{SRAND});
    }
    my %hash;
    {
        no warnings;
        do "../perl/lib/unicore/Heavy.pl";
        %hash= %utf8::loose_to_file_of;
    }
    if ($ENV{MERGE_KEYS}) {
        my @keys= keys %hash;
        foreach my $loose (keys %utf8::loose_property_name_of) {
            my $to= $utf8::loose_property_name_of{$loose};
            next if $to eq $loose;
            foreach my $key (@keys) {
                my $copy= $key;
                if ($copy=~s/^\Q$to\E(=|\z)/$loose$1/) {
                    #print "$key => $copy\n";
                    $hash{$copy}= $key;
                }
            }
        }
    }
    foreach my $key (keys %hash) {
        my $munged= uc($key);
        $munged=~s/\W/__/g;
        $hash{$key} = $munged;
    }

    if (@ARGV) {
        foreach my $key (keys %hash) {
            print $key,"\n";
        }
        exit;
    }

    my $name= shift @ARGV;
    $name ||= "mph";
    make_files(\%hash,$name);
}

1;
__END__

