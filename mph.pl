package MinimalPerfectHash;
use strict;
use warnings;
use feature 'say';
use Carp;
use Text::Wrap;
use List::Util qw / min shuffle /;
use Data::Dumper; $Data::Dumper::Sortkeys = 1;
use warnings 'FATAL'=>'all';


sub new {
    my ($class,%opts)= @_;
    $opts{INF}||=1e9;
    $opts{DEBUG}||=0;
    $opts{RSHIFT}||=8;
    $opts{FNV_CONST}||=16777619;

    return bless \%opts,$class;
}

sub _index {
    my ($buf,$string)= @_;

    my $l= length $string;
    if (!$l) { return 0 }
    elsif ($l==1) { return ord($string) }
    elsif ($l==2) { return unpack "v", $string }
    return index $buf, $string
}

sub _fnv {
    my ($self, $key, $seed)= @_;
    my $hash = 0+$seed;
    foreach my $char (split //, $key) {
        $hash = $hash ^ ord($char);
        $hash = ($hash * $self->{FNV_CONST}) & 0xFFFFFFFF;
    }
    return $hash;
}

sub build_perfect_hash {
    my ($self, $hash, $split_pos)= @_;

    carp "confess wtf!" unless $self->{RSHIFT};

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
            my $h= $self->_fnv($key,$seed1);
            next SEED1 if $h >= $max_h; # check if this hash would bias, and if so find a new seed
            next SEED1 if exists $hash_to_key{$h};
            next SEED1 if $high{$h >> $self->{RSHIFT}}++;
            push @{$key_buckets{$h % $n}}, $key;
            $hash_to_key{$h}= $key;
            $key_to_hash{$key}= $h;
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
            goto SEED1 if $seed2 > 0xFFFF;
            my @idx= map {
                die "wtf '$_'" if !defined $key_to_hash->{$_};
                ( ( ( $key_to_hash->{$_} >> $self->{RSHIFT} ) ^ $seed2 ) & 0xFFFFFFFF ) % $n 
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

sub get_occurrences {
    my ( $self, $occurrences_mem, $sref, $wref ) = @_;
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
    my ( $self, $popularity, $i, $len, $diff ) = @_;
    return if $len <= 2;
    for ( $i .. $i + $len - 1 ) {
        $popularity->[$_] += $diff;
    }
}

sub get_popularity {
    my ( $self, $popularity, $i, $len ) = @_;
    my $res = {
        reused_digits => 0,
        popularity    => 0,
    };
    my $min_pop = undef;
    for ( $i .. $i + $len - 1 ) {
        if ( $popularity->[$_] > $self->{INF} - 1 ) {
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
    my ( $self, $s1, $s2 ) = @_;
    return {
        reused_digits => $s1->{reused_digits} + $s2->{reused_digits},
        popularity    => min( $s1->{popularity}, $s2->{popularity} ),
    };
}

sub change_all_popularities {
    my ( $self, $occurences_mem, $popularity, $sref, $wref, $diff ) = @_;
    my $wlen = length $$wref;
    return if $wlen <= 2;
    my $occurrences = $self->get_occurrences( $occurences_mem, $sref, $wref );
    for my $i (@$occurrences) {
        for ( $i .. $i + $wlen - 1 ) {
            $popularity->[$_] += $diff;
        }
    }
}

sub compare_score {
    my ( $self, $s1, $s2 ) = @_;
    if ( $s1->{reused_digits} != $s2->{reused_digits} ) {
        return $s1->{reused_digits} <=> $s2->{reused_digits};
    }
    return $s1->{popularity} <=> $s2->{popularity};
}

sub get_most_popular_position {
    my ( $self, $occurences_mem, $popularity, $sref, $wref ) = @_;
    my $wlen = length $$wref;
    if ( $wlen <= 2 ) {
        return {
            position => 0,
            score => {
                reused_digits => $wlen,
                popularity => 0,
            },
        };
    }
    my $best_score = {
        reused_digits => -1,
        popularity    => -1,
    };
    my $best_pos    = -1;
    my $occurrences = $self->get_occurrences( $occurences_mem, $sref, $wref );
    for my $i (@$occurrences) {
        my $score = $self->get_popularity( $popularity, $i, $wlen );
        if ( $self->compare_score( $score, $best_score ) > 0 ) {
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
    my ($self,$words, $splits, $sref) = @_;
    say("Squeezing...") if $self->{DEBUG};
    my %occurrences_mem;
    my %split_points;
    my $n = length $$sref;
    my @popularity = ( 0 ) x $n;

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
        $self->change_all_popularities( \%occurrences_mem, \@popularity, $sref, \$w, $cnt / length($w) );
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
            my $cand = $self->get_most_popular_position( \%occurrences_mem, \@popularity, $sref, \$word );
            if ( $cand->{position} != -1 ) {
                my $cand_score = $cand->{score};
                if ( $cand_score->{reused_digits} == length($word) ) {
                    $split_points{$word} = 0;
                    next WORD;
                }
                elsif ( $self->compare_score( $cand_score, $best_score ) > 0 ) {
                    $best_score = $cand_score;
                    $best_pos1  = $cand->{position};
                    $best_pos2  = -1;
                    $best_split = undef;
                }
            }
        }

        for my $split ( @{ $splits->{$word} } ) {
            my $cand2 = $self->get_most_popular_position( \%occurrences_mem, \@popularity, $sref, \$split->{w2} );
            if ( $cand2->{position} != -1 ) {
                my $cand1 = $self->get_most_popular_position( \%occurrences_mem, \@popularity, $sref, \$split->{w1} );
                if ( $cand1->{position} != -1 ) {
                    my $cand_score =
                      $self->merge_score( $cand1->{score}, $cand2->{score} );
                    if ( $cand_score->{reused_digits} == length($word) ) {
                        $split_points{$word} = $split->{split_point};
                        next WORD;
                    }
                    if ( $self->compare_score( $cand_score, $best_score ) > 0 ) {
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
            $self->change_popularity( \@popularity, $best_pos1, length( $best_split->{w1} ), $self->{INF} );
            $self->change_popularity( \@popularity, $best_pos2, length( $best_split->{w2} ), $self->{INF} );
            $split_points{$word} = $best_split->{split_point};
        }
        else {
            $self->change_popularity( \@popularity, $best_pos1, length($word), $self->{INF} );
            $split_points{$word} = 0;
        }
    }

    my $res = "";
    my @chars = split '', $$sref;
    for my $i ( 0 .. $n - 1 ) {
        if ( $popularity[$i] > $self->{INF} - 1 ) {
            $res .= $chars[$i];
        }
    }
    say( $n. '->' . ( length $res ) ) if $self->{DEBUG};

    # ilya's algorithm chooses to "split" full strings at 0, so that the prefix is empty
    # and the suffix contains the full key, mph wants it the other way around, as we do
    # the prefix check first. so we correct it at the end here.
    $split_points{$_} ||= length($_) for keys %split_points;

    return ($res, \%split_points);
}

sub get_words_combination {
    my ($self,$words,$splits)= @_;
    my $res = "";
    WORD:
    for my $word (@$words) {
        if ( _index( $res, $word ) != -1 ) {
            next WORD;
        }
        else {
            for my $split ( @{ $splits->{$word} } ) {
                if (   _index( $res, $split->{w1} ) != -1
                    && _index( $res, $split->{w2} ) != -1 )
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
    my ($self,$h,$s) = @_;

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
    $s //= $self->get_words_combination(\@words,\%splits);

    say($s) if $self->{DEBUG};
    say( length $s ) if $self->{DEBUG};

     while (1) {
        @words = reverse @words;
        my ($new_s, $new_split_points)= $self->squeeze( \@words, \%splits, \$s );
        if (!$split_points || length($new_s) < length($s)) {
            $s= $new_s;
            $split_points= $new_split_points;
        } else {
            last;
        }
    }

    my $same= 0;
    my $max_same= $self->{MAX_SAME} || 5;
    my $counter= 0;
    while ($self->{RANDOMIZE} && $same < $max_same) {
        if ($counter % 2) {
            @words = shuffle @words;
        } else {
            @words = reverse @words;
        }
        my ($new_s,$new_split_points) = $self->squeeze(\@words, \%splits, \$s);
        if (length($s) > length($new_s)) {
            $s = $new_s;
            $split_points= $new_split_points;
            $same= 0;
        } elsif (length($s) <= length($new_s)) {
            $counter++;
            $same++;
        }
    }

    say $s if $self->{DEBUG};
    say( "Result: " . length($s) ) if $self->{DEBUG};

    return $s, $split_points;
}

sub blob_as_code {
    my ($self,$blob,$blob_name)= @_;

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
    my ($self,$ofh)= @_;
    print $ofh "#include <stdio.h>\n";
    print $ofh "#include <string.h>\n";
    print $ofh "#include <stdint.h>\n";
    print $ofh "\n";
}

sub print_defines {
    my ($self,$ofh,$defines)= @_;

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
    my ($self,$second_level,$blob)= @_;

    my %defines;
    my %tests;
    my @rows;
    foreach my $row (@$second_level) {
        $defines{$row->{value}}= $row->{idx}+1;
        $tests{$row->{key}}= $defines{$row->{value}};
        my @u16= (
            $row->{seed2},
            _index($blob,$row->{prefix}//0),
            _index($blob,$row->{suffix}//0),
        );
        $_ > 0xFFFF and die "panic: value exceeds range of uint16_t"
            for @u16;
        my @u8= (
            length($row->{prefix}),
            length($row->{suffix}),
        );
        $_ > 0xFF and die "panic: value exceeds range of uint8_t"
            for @u8;
        push @rows, sprintf("  { 0x%04x, 0x%04x, 0x%04x, 0x%02x, 0x%02x, %s } /* '%s' : '%s' */",
            @u16, @u8, $row->{value}, $row->{prefix}, $row->{suffix} );
    }
    return \@rows,\%defines,\%tests;
}

sub print_algo {
    my ($self, $ofh, $second_level, $seed1, $length_all_keys, $smart_blob, $rows,
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
    printf $ofh "srand: %d\n", $self->{SRAND};
    printf $ofh "rows: %s\n", $n;
    printf $ofh "seed: %s\n", $seed1;
    printf $ofh "full length of keys: %d\n", $length_all_keys;
    printf $ofh "blob length: %d\n", length $smart_blob;
    printf $ofh "ref length: %d\n", 0+@$second_level * 8;
    printf $ofh "data size: %d (%%%.2f)\n", $data_size, ($data_size / $length_all_keys) * 100;
    print $ofh "*/\n\n";

    print $ofh $self->blob_as_code($smart_blob, $blob_name);
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

    print $ofh "#define ${prefix}_RSHIFT $self->{RSHIFT}\n";
    print $ofh "#define ${prefix}_BUCKETS $n\n\n";
    printf $ofh "const uint32_t ${prefix}_SEED1 = 0x%08x;\n", $seed1;
    printf $ofh "const uint32_t ${prefix}_FNV_CONST = 0x%08x;\n\n", $self->{FNV_CONST};

    print $ofh "\n";
    print $ofh "const struct $struct_name $table_name\[${prefix}_BUCKETS] = {\n", join(",\n", @$rows)."\n};\n\n";
    print $ofh <<"EOF_CODE";
#define MYEQ(b,s1_o,s2,n) ( (!(n)) ? 1 : \\
                            ((n)==1) ? (((uint8_t)(s1_o))==*((uint8_t*)(s2))) : \\
                            ((n)==2) ? (((uint16_t)(s1_o))==*((uint16_t*)(s2))) : \\
                            (memcmp(((b)+(s1_o)),(s2),(n))==0) )

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
            ( MYEQ($blob_name,$table_name\[n].pfx, key, $table_name\[n].pfx_len) ) &&
            ( MYEQ($blob_name,$table_name\[n].sfx, key + $table_name\[n].pfx_len, $table_name\[n].sfx_len) )
        ) {
            return $table_name\[n].value;
        }
    }
    return 0;
}
EOF_CODE
}

sub print_main {
    my ($self,$ofh,$h_file,$match_name,$prefix)=@_;
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
    my ($self,$file, $tests_hash)= @_;
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
    my ($self,$file,$h_file, $second_level, $seed1, $length_all_keys,
        $smart_blob, $rows, $defines, $match_name, $prefix)= @_;
    open my $ofh, ">", $file
        or die "Failed to open '$file': $!";
    $self->print_includes($ofh);
    $self->print_defines($ofh, $defines);
    $self->print_main($ofh,$h_file,$match_name,$prefix);
    close $ofh;
}

# make sure we split such that we test the longest string first.
sub _fixup_splitpoints {
    my ($self,$blob,$split_points)= @_;
    KEY:
    foreach my $key (keys %$split_points) {
        if (_index($blob,$key)>=0) {
            $split_points->{$key}= length $key;
            next KEY;
        }
        for (my $len= length $key; $len; $len--) {
            my ($l,$r)= unpack "A".$len."A*", $key;
            if (($split_points->{$key}>2 or $len>$split_points->{$key}) && _index($blob,$l)>=0 && _index($blob,$r)>=0) {
                $split_points->{$key}= $len;
                next KEY;
            }
        }
    }
}

sub make_mph_from_hash {
    my ($self,$hash)= @_;

    # we do this twice because often we can find longer prefixes on the second pass.
    my @keys= sort {length($b) <=> length($a) || $a cmp $b } keys %$hash;

    my @tuples;
    push @tuples, ["ilya",$self->build_split_words_ilya($hash)];

    @tuples= sort {length($a->[1])<=>length($b->[1])} @tuples;
    if ($self->{DEBUG}) {
        printf "strategy: %s length %d\n", $_->[0], length($_->[1])
            for @tuples;
    }

    my ($strategy, $blob, $split_points)= @{$tuples[0]};

    $self->_fixup_splitpoints($blob,$split_points);

    my ($seed1, $second_level, $length_all_keys)= $self->build_perfect_hash($hash, $split_points);
    my ($rows, $defines, $tests)= $self->build_array_of_struct($second_level, $blob);
    return ($second_level, $seed1, $length_all_keys, $blob, $rows, $defines, $tests);
}

sub make_files {
    my ($self,$hash)= @_;

    my $base_name= $self->{BASE_NAME};

    my $h_name= $base_name . "_algo.h";
    my $c_name= $base_name . "_test.c";
    my $p_name= $base_name . "_test.pl";
    my $blob_name= $base_name . "_blob";
    my $struct_name= $base_name . "_bucket_info";
    my $table_name= $base_name . "_table";
    my $match_name= $base_name . "_match";
    my $prefix= uc($base_name);

    my ($second_level, $seed1, $length_all_keys,
        $smart_blob, $rows, $defines, $tests)= $self->make_mph_from_hash( $hash );
    $self->print_algo( $h_name,
        $second_level, $seed1, $length_all_keys, $smart_blob, $rows,
        $blob_name, $struct_name, $table_name, $match_name, $prefix );
    $self->print_test_binary( $c_name, $h_name, $second_level, $seed1, $length_all_keys,
        $smart_blob, $rows, $defines,
        $match_name, $prefix );
    $self->print_tests( $p_name, $tests );
}

sub make_perfect_hash {
    my ($self,$hash)= @_;
    if ($self->{SRAND}) {
        srand($self->{SRAND});
    } else {
        $self->{SRAND}= srand();
    }
    $self->make_files($hash);

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

    my $name= shift @ARGV;
    $name ||= "mph";
    local $ENV{BASE_NAME}= $name;
    __PACKAGE__->new(%ENV)->make_perfect_hash(\%hash);
}

1;
__END__

