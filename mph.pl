package MinimalPerfectHash;
use strict;
use warnings;
use Data::Dumper;
use Carp;
use Text::Wrap;

my $DEBUG= 0;
my $RSHIFT= 8;
my $FNV_CONST= 16777619;

sub _fnv {
    my ($key, $seed)= @_;

    my $hash = 0+$seed + length($key);
    foreach my $char (split //, $key) {
        $hash = $hash ^ ord($char);
        $hash = ($hash * $FNV_CONST) & 0xFFFFFFFF;
    }
    return $hash;
}

sub build_perfect_hash {
    my ($hash, $split_pos)= @_;

    my $n= 0+keys %$hash;
    my $seed1= 0xFEEDFACE;
    my $hash_to_key;
    my $key_to_hash;
    my $long_blob= " ";
    SEED1:
    for (;1;$seed1+=2) {
        my %hash_to_key;
        my %key_to_hash;
        my %high;
        $long_blob= "";
        foreach my $key (sort keys %$hash) {
            $long_blob .= $key;
            my $h= _fnv($key,$seed1);
            next SEED1 if exists $hash_to_key{$h};
            next SEED1 if exists $high{$h >> $RSHIFT};
            $hash_to_key{$h}= $key;
            $key_to_hash{$key}= $h;
            $high{$h >> $RSHIFT}++;
        }
        $hash_to_key= \%hash_to_key;
        $key_to_hash= \%key_to_hash;
        last SEED1;
    }

    my %key_buckets;
    foreach my $h (keys %$hash_to_key) {
        push @{$key_buckets{$h % $n}}, $hash_to_key->{$h};
    }
    my %token;
    my @first_level;
    my @second_level;
    foreach my $first_idx (sort { @{$key_buckets{$b}} <=> @{$key_buckets{$a}} || $a <=> $b } keys %key_buckets) {
        my $keys= $key_buckets{$first_idx};
        my $seed2;
        SEED2:
        for ($seed2=1;1;$seed2++) {
            next SEED1 if $seed2 > 0xFFFF;
            my @idx= map {
                ( ( ( ( ( $key_to_hash->{$_} >> $RSHIFT ) ^ $seed2 ) & 0xFFFFFFFF ) ) ) % $n
            } @$keys;
            my %seen;
            next SEED2 if grep { $second_level[$_] || $seen{$_}++ } @idx;
            $first_level[$first_idx]= $seed2;
            @second_level[@idx]= map {
                my ($prefix,$suffix)= unpack "A$split_pos->{$_}A*", $_;
                $token{$prefix}++;
                $token{$suffix}++ if defined $suffix;

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
    my $blob= " ";
    foreach my $key (sort { length($b) <=> length($a) || $a cmp $b } keys %token) {
        if (index($blob,$key)<0) {
            $blob.=$key;
        }
    }
    return $seed1, \@second_level, $blob, $long_blob;
}

sub build_split_words {
    my ($hash, $blob, $old_res)= @_;
    $blob //= "-";
    my %res;
    KEY:
    foreach my $key (sort { length($b) <=> length($a) || $a cmp $b } keys %$hash) {
        my $best= 0;
        my $append= $key;
        foreach my $idx (reverse 0 .. length($key)) {
            my $prefix= substr($key,0,$idx);
            my $suffix= substr($key,$idx);
            my $i1= index($blob,$prefix)>=0;
            my $i2= index($blob,$suffix)>=0;
            if ($i1 and $i2) {
                if ($DEBUG and $old_res and $old_res->{$key} != $idx) {
                    print "changing: $key => $old_res->{$key} : $idx\n";
                }
                $res{$key}= $idx;
                next KEY;
            } elsif ($i1) {
                if (length $suffix <= length $append) {
                    $best= $idx;
                    $append= $suffix;
                }
            } elsif ($i2) {
                if (length $prefix <= length $append) {
                    $best= $idx;
                    $append= $prefix;
                }
            }
        }
        #print "$key => $best : $append\n";
        if ($DEBUG and $old_res and $old_res->{$key} != $best) {
            print "changing: $key => $old_res->{$key} : $best\n";
        }
        $res{$key}= $best;
        $blob .= $append;
    }
    return ($blob,\%res);
}


sub blob_as_code {
    my ($blob)= @_;

    # output the blob as C code.
    my @code= ("const unsigned char * const mph_blob =\n");
    my $blob_len= length $blob;
    while (length($blob)) {
        push @code, sprintf qq(    "%s"), substr($blob,0,65,"");
        push @code, length $blob ? "\n" : ";\n";
    }
    push @code, "/* mph_blob length: $blob_len */\n";
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
        push @rows, sprintf("  { %5d, %5d, %5d, %3d, %3d, %s }",
            $row->{seed2},
            index($blob,$row->{prefix}//0),
            index($blob,$row->{suffix}//0),
            length($row->{prefix}),
            length($row->{suffix}),
            $row->{value},
            $row->{key}
        );
    }
    return \@rows,\%defines,\%tests;
}

sub print_algo {
    my ($ofh, $second_level, $seed1, $long_blob, $smart_blob, $rows) = @_;

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
    printf $ofh "full length of keys: %d\n", length $long_blob;
    printf $ofh "blob length: %d\n", length $smart_blob;
    printf $ofh "ref length: %d\n", 0+@$second_level * 8;
    printf $ofh "data size: %d (%%%.2f)\n", $data_size, ($data_size / length $long_blob) * 100;
    print $ofh "*/\n";

    print $ofh blob_as_code($smart_blob);
    print $ofh <<EOF_CODE;
struct mph_meta {
    uint16_t seed2;
    uint16_t pfx;
    uint16_t sfx;
    uint8_t  pfx_len;
    uint8_t  sfx_len;
    uint16_t value;
};
EOF_CODE

    print $ofh "#define MPH_RSHIFT $RSHIFT\n";
    printf $ofh "const uint32_t MPH_SEED1 = 0x%08x;\n", $seed1;
    printf $ofh "const uint32_t MPH_FNV_CONST = 0x%08x;\n", $FNV_CONST;
    print $ofh "const uint16_t MPH_BUCKETS = $n;\n\n";

    print $ofh "\n";
    print $ofh "const struct mph_meta const mph[$n] = {\n", join(",\n", @$rows)."\n};\n";
    print $ofh <<'EOF_CODE';
uint16_t mph_match( const unsigned char * const key, const uint16_t key_len ) {
    const unsigned char * ptr= key;
    const unsigned char * ptr_end= key+key_len;
    uint32_t h= MPH_SEED1 + key_len;
    uint32_t s;
    uint32_t n;
    do {
        h  = (h ^ *ptr) * MPH_FNV_CONST;
    } while (++ptr<ptr_end);
    n= h % MPH_BUCKETS;
    s = mph[n].seed2;
    if (s) {
        h= (h >> MPH_RSHIFT) ^ s;
        n = h % MPH_BUCKETS;
        if ( memcmp(mph_blob + mph[n].pfx, key, mph[n].pfx_len)==0 &&
            (!mph[n].sfx || memcmp(mph_blob + mph[n].sfx,key+mph[n].pfx_len,mph[n].sfx_len)==0)
        ) {
            return mph[n].value;
        }
    }
    return 0;
}
EOF_CODE
}

sub print_main {
    my ($ofh,$h_file)=@_;
    print $ofh <<"EOF_CODE";
#include "$h_file"

int main(int argc, unsigned char *argv[]){
    int i;
    for (i=1; i<argc; i++) {
        unsigned char *key = argv[i];
        int key_len = strlen(key);
        printf("key: %s got: %d\\n", key, mph_match(key,key_len));
    }
}
EOF_CODE
}

# output the test Perl code.
sub print_tests {
    my ($file, $tests_hash)= @_;
    open my $ofh, ">", $file
        or die "Failed to open '$file' for writing: $!";
    my $num_tests= 0+keys %$tests_hash;
    print $ofh "use strict;\nuse warnings;\nuse Test::More tests => $num_tests;\nmy \@res;";
    my $bytes= 0;
    my @tests= sort keys %$tests_hash;
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
    my ($file,$h_file, $second_level, $seed1, $long_blob, $smart_blob, $rows, $defines)= @_;
    open my $ofh, ">", $file
        or die "Failed to open '$file': $!";
    print_includes($ofh);
    print_defines($ofh, $defines);
    #print_algo($ofh, $second_level, $seed1, $long_blob, $smart_blob, $rows);
    print_main($ofh,$h_file);
    close $ofh;
}

sub make_mph_from_hash {
    my $hash= shift;

    # we do this twice because often we can find longer prefixes on the second pass.
    my ($orig_smart_blob, $old_res)= build_split_words($hash);
    my ($smart_blob, $res_to_split)= build_split_words($hash, $orig_smart_blob, $old_res);
    my ($seed1, $second_level, $blob, $long_blob)= build_perfect_hash($hash, $res_to_split);
    my ($rows, $defines, $tests)= build_array_of_struct($second_level, $smart_blob);
    return ($second_level, $seed1, $long_blob, $smart_blob, $rows, $defines, $tests);
}

sub make_files {
    my ($hash,$base_name)= @_;

    my $h_name= $base_name . "_algo.h";
    my $c_name= $base_name . "_test.c";
    my $p_name= $base_name . "_test.pl";

    my ($second_level, $seed1, $long_blob,
        $smart_blob, $rows, $defines, $tests)= make_mph_from_hash( $hash );
    print_algo( $h_name,
        $second_level, $seed1, $long_blob, $smart_blob, $rows );
    print_test_binary( $c_name, $h_name,
        $second_level, $seed1, $long_blob, $smart_blob, $rows, $defines );
    print_tests( $p_name, $tests );
}

unless (caller) {
    my $hash= do {
        no warnings;
        do "../perl/lib/unicore/Heavy.pl";
        my %hash= map {
            my $munged= uc($_);
            $munged=~s/\W/__/g;
            $_ => $munged
        } keys %utf8::loose_to_file_of;
        \%hash
    };

    my $name= shift @ARGV;
    $name ||= "mph";
    make_files($hash,$name);
}

1;
__END__

