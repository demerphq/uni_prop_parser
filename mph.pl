package MinimalPerfectHash;
use strict;
use warnings;
use feature 'say';
use Carp;
use Text::Wrap;
use List::Util qw / min /;
use Data::Dumper; $Data::Dumper::Sortkeys = 1;

my $INF   = 1e9;
my $DEBUG= 0;
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
                my $sp= $split_pos->{$_} // die "no split pos for '$_':$!";
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
        printf "Using preprocessing, initial blob size %d\n", length($blob);
    } else {
        printf "No preprocessing, initial blob size %d\n", length($blob);
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

    
        print "$best_prefix|$best_suffix => $best => $append\n";
        $appended{$best_prefix}++;
        $appended{$best_suffix}++;
    }
    my $b2 = "";
    foreach my $key (sort { length($b) <=> length($a) || $a cmp $b } keys %appended) {
        $b2 .= $key unless index($b2,$key)>=0;
    }
    if (length($b2)<length($blob)) {
        printf "Length old blob: %d length new blob: %d, recomputing using new blob\n", length($blob),length($b2);
        $blob= $b2;
        %appended=();
        goto REDO;
    } else {
        printf "Length old blob: %d length new blob: %d, keeping old blob\n", length($blob),length($b2);
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

    for my $word (@$words) {
        my $best_pos1  = -1;
        my $best_pos2  = -1;
        my $best_score = {
            reused_digits => -1,
            popularity    => -1,
        };
        my $best_split = undef;

        my $for_free = '';

        {
            my $cand = get_most_popular_position( \%occurrences_mem, \@popularity, $sref, \$word );
            if ( $cand->{position} != -1 ) {
                my $cand_score = $cand->{score};
                if ( $cand_score->{reused_digits} == length($word) ) {
                    $for_free = 1;
                    $split_points{$word} = 0;
                }
                elsif ( compare_score( $cand_score, $best_score ) > 0 ) {
                    $best_score = $cand_score;
                    $best_pos1  = $cand->{position};
                    $best_pos2  = -1;
                    $best_split = undef;
                }
            }
        }

        next if $for_free;

        for my $split ( @{ $splits->{$word} } ) {
            my $cand2 = get_most_popular_position( \%occurrences_mem, \@popularity, $sref, \$split->{w2} );
            if ( $cand2->{position} != -1 ) {
                my $cand1 = get_most_popular_position( \%occurrences_mem, \@popularity, $sref, \$split->{w1} );
                if ( $cand1->{position} != -1 ) {
                    my $cand_score =
                      merge_score( $cand1->{score}, $cand2->{score} );
                    if ( $cand_score->{reused_digits} == length($word) ) {
                        $for_free = 1;
                        $split_points{$word} = $split->{split_point};
                        last;
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

        next if $for_free;

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
    return ($res, \%split_points);
}

sub get_words_combination {
    my ($words,$splits)= @_;
    my $res = "";
    for my $word (@$words) {
        my $already_have = '';
        if ( index( $res, $word ) != -1 ) {
            $already_have = 1;
        }
        else {
            for my $split ( @{ $splits->{$word} } ) {
                if (   index( $res, $split->{w1} ) != -1
                    && index( $res, $split->{w2} ) != -1 )
                {
                    $already_have = 1;
                    last;
                }
            }
        }
        if ( !$already_have ) {
            $res .= $word;
        }
    }
    return $res;
}

sub build_split_words_ilya {
    my ($h) = @_;

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

    @words =
      sort { length($a) <=> length($b) || $a cmp $b } @words;
    my $s = get_words_combination(\@words,\%splits);

    say($s) if $DEBUG;
    say( length $s ) if $DEBUG;

    ($s, $split_points)= squeeze( \@words, \%splits, \$s );
    @words = reverse @words;
    ($s, $split_points)= squeeze( \@words, \%splits, \$s );
    @words = reverse @words;
    ($s, $split_points)= squeeze( \@words, \%splits, \$s );

    # while (1) {
    # 	@words = shuffle @words;
    # 	my $new_s = squeeze(\$s);
    # 	last if length($s) == length($new_s);
    # 	$s = $new_s;
    # }

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
            index($blob,$row->{prefix}//0),
            index($blob,$row->{suffix}//0),
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
            ( memcmp($blob_name + $table_name\[n].pfx, key, $table_name\[n].pfx_len) == 0 ) &&
            ( !$table_name\[n].sfx_len || memcmp($blob_name + $table_name\[n].sfx,
                key + $table_name\[n].pfx_len, $table_name\[n].sfx_len) == 0 )
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
    push @tuples, ["greedy",build_split_words($hash,0)];
    push @tuples, ["greedy-smart",build_split_words($hash,1)];
    push @tuples, ["ilya",build_split_words_ilya($hash)];

    @tuples= sort {length($a->[1])<=>length($b->[1])} @tuples;


    my ($strategy, $blob, $split_points)= @{$tuples[0]};

    warn sprintf "Best result was '%s', length %d\n", $strategy, length($blob);

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

