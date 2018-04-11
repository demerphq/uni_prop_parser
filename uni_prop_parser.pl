use strict;
use warnings;
use Data::Dumper;
use Carp;

# So what is this all about.
#
# Unicode properties are of the form 'prefix=suffix' or 'prefix'
# there are many expamples of prefixes having aliases, so that if we have
# foo=bar
# foo=baz
# foo=bop
#
# and we have 'zap' as an alias for 'foo' then we also must support the
# allowed suffixes for 'foo' for 'zap' as well:
#
# zap=bar
# zap=baz
# zap=bop
#
# Which means that fully expanded we have something like 4897 possibilities,
# many of which are quite long. Another aspect of this dataset is we have many
# prefixes and suffixes which are repeated or substrings of each other.
# For instance we have:
#
# isxposixalnum
# isposixalnum
# xposixalnum
# posixalnum
#
# The 'is' and 'in' prefixes in particular often present this issue.
#
# The objective of this code is to build a matcher for these sets, using C code
# which is both efficient, and has a small footprint. We do this with a combination
# of memcmp() and switch()/if() comparisons on the characters in the strings, and
# the the length of the strings. We process prefix and suffix indepenently so we can
# reuse the suffix code for the multiple prefixes.
#
# Our general strategy is:
#
# a) handle keys of length==1 separately.
#
# b) then build a two level switch/case structure which handles the first two chars
# of the possibilities. This allows us to use the string 'xposixalnum' to handle
# all four cases above, as we do not need to look at the first two chars of any of
# the strings.
#
# c) If the switch on the first two characters does not give us unique cases to compare
# with memcmp(), then we switch on length, grouping strings by the same length, if that
# does not give use unique cases we recursively find the "best" characters to switch on
# in the string. Our preference for "best" is the first or last character in the string,
# so that we can avoid checking those bytes with memcmp() later, however we will use
# other characters in the string if they would result in markedly less comparisons overall.
#
# Once we match the prefix we use the (c) strategy (switch on length, then rarest characters)
# for the suffixes, but we use labels and goto to share one suffix handler between multiple
# prefixes.


my $DEBUG=0;
my %EXTRACT;
my %ENUM_SEEN;
my %SECOND_LEVEL;
my $BLOB="";
my $MAX_MEMCMP_PER_CASE= shift(@ARGV) || 3; # increase me to reduce code footprint at the modest cost of some size.

$Data::Dumper::Sortkeys=1;

sub _ind {
    Carp::confess("no repeat") unless defined $_[1];
    Carp::confess("arg 1 is not a number!") if $_[1]=~/\D/;
    return +("    " x $_[1]) . $_[0];
}
sub _indf {
    my $fmt= shift @_;
    my $depth = pop @_;
    confess "no arguments?" unless defined $_[0];
    return _ind(sprintf($fmt,@_),$depth);
}

sub _case {
    my ($char,$depth)= @_;
    return _indf("case %s:", $char=~/\w/ ? "'$char'" : ord($char), $depth);
}

sub _enum_for_value {
    my ($value)= @_;
    confess "got a ref" if ref $value;
    my $nkeys= 1+keys %ENUM_SEEN;
    return sprintf "return %d; /* $value */",$ENUM_SEEN{$value} //= $nkeys;
}

sub _handle_second_level {
    my ($hash,$key_name,$len_name,$depth)= @_;
    confess "not a hash" unless ref $hash;
    if (my $done= $SECOND_LEVEL{0+$hash}) {
        return _ind($done,$depth);
    }
    my $ret;

    my @keys= sort keys %$hash;
    if (@keys == 1 and $keys[0] eq "") {
        my ($key)= @keys;
        if ($keys[0] eq "") {
            $ret= _indf("%s", _enum_for_value($hash->{$key}), $hash->{$key}, $depth);
        } else {
            $ret= _indf("if (memEQ(%s,BLOB + %d, %d)) { %s } /* %s (f)*/",
                $key_name, _index_in_blob($key), length($key), _enum_for_value($hash->{$key}), $key, $depth
            );
        }
    } elsif (my $name= $EXTRACT{0+$hash}) {
        $ret= join "\n", _indf("%s: {",$name,$depth),
                    _handle_tail($hash,"","suffix","suffix_len",$depth+1),
                    #_ind("return 0; /* No match! */",$depth+1),
                    _ind("}",$depth);
        $SECOND_LEVEL{0+$hash}= sprintf "goto %s;",$name;
    } else {
        $ret= _handle_tail($hash,"","suffix","suffix_len",$depth);
    }
    return $ret;
}

sub _add_to_blob {
    my %merged;
    foreach my $hash (@_) {
        foreach my $key (sort keys %$hash) {
            $merged{$key}++;
        }
    }
    foreach my $key (sort { length($b) <=> length($a) || $a cmp $b } keys %merged) {
        if (index($BLOB,$key)<0) {
            $BLOB .= $key;
        }
    }
}

sub _index_in_blob {
    my ($key)= @_;
    my $index= index $BLOB, $key;
    if ($index < 0 ) { die "Blon is missing '$key'!" };
    return $index;
}

sub _switch_two_chars {
    my ($hash,$rhs,$key_name,$len_name,$depth)=@_;

    my %two_char;
    my %tails;

    foreach my $key (sort keys %$hash) {
        my $val= $hash->{$key};
        my $fc= substr($key,0,1,"");
        my $sc= substr($key,0,1,"");
        $two_char{$fc}{$sc}{$key}= $val;
        $tails{$key}++;
    }
    _add_to_blob($rhs,\%tails);

    my @code;
    push @code, _indf("switch(%s[0]) {", $key_name,$depth);
    foreach my $k1 (sort keys %two_char) {
        push @code, _case($k1,$depth+1);
        push @code, _indf("switch(%s[1]) {", $key_name,$depth+2);
        foreach my $k2 (sort keys %{$two_char{$k1}}) {
            push @code, _case($k2,$depth+3);

            push @code, _handle_tail($two_char{$k1}{$k2}, $k1.$k2, $key_name . "2", $len_name, $depth+4);

            push @code, _ind("break;",$depth+4);
        }
        push @code, _ind("}",$depth+2);
        push @code, _ind("break;",$depth+2);
    }
    push @code,_ind("}",$depth);

    return join "\n", @code;

}


sub _handle_tail {
    my ($hash, $pfx, $key_name, $len_name, $depth)= @_;
    my $ofs= length $pfx;
    my @keys= sort keys %$hash;

    if (@keys == 1) {
        my ($key)= @keys;
        if ($pfx) {
            if ($key eq "") {
                return sprintf("%s /* %s (a)*/",
                    _handle_second_level($hash->{$key},"suffix","suffix_len",$depth),
                    $pfx.$key,$depth);
            } else {
                return(_indf("if (memEQ(%s,BLOB + %d,%d)) { /* %s (b)*/", $key_name,
                        _index_in_blob($key), length($key), $pfx . $key, $depth),
                    _handle_second_level($hash->{$key},"suffix","suffix_len",$depth+1),
                    _ind("}",$depth));
            }
        } else {
            if ($key eq "") {
                return _indf("%s", _enum_for_value($hash->{$key}), $hash->{$key}, $depth);
            } else {
                return _indf("if (memEQ(%s,BLOB + %d, %d)) { %s } /* %s (f)*/",
                    $key_name, _index_in_blob($key), length($key), _enum_for_value($hash->{$key}), $key, $depth
                );
            }
        }
    }
    my %by_length;
    foreach my $key (@keys) {
        $by_length{$ofs+length $key}{$key}=$hash->{$key};
    }
    my @lengths= sort { $a <=> $b } keys %by_length;
    my @code;
    if (@lengths>1) {
        push @code, _indf("switch (%s) {",$len_name,$depth);
        foreach my $len (@lengths) {
            push @code, _indf("case %d:",$len,$depth+1);
            push @code, _handle_keys_same_length($by_length{$len},$pfx,$key_name, $len_name, $depth+2);
            push @code, _ind("break;",$depth+2);
        }
        push @code, _ind("}",$depth);
    } else {
        push @code, _indf("if (%s == %d) {",$len_name,$lengths[0],$depth);
        foreach my $len (@lengths) {
            push @code, _handle_keys_same_length($by_length{$len},$pfx,$key_name, $len_name, $depth+2);
        }
        push @code, _ind("}",$depth);
    }
    return join "\n", @code;
}

sub _handle_keys_same_length {
    my ($hash,$pfx,$key_name,$len_name,$depth,$covered)= @_;
    $covered||=[];
    my @keys= sort keys %$hash;
    my @code;
    if (@keys <= $MAX_MEMCMP_PER_CASE) {
        while (@keys) {
            my $key= shift @keys;
            my $chopped_key= $key;
            while (length($chopped_key) and $covered->[length($chopped_key)-1]) {
                chop $chopped_key;
            }
            my $i=0;
            while ($covered->[$i]) { $i++ };
            substr($chopped_key,0,$i,"") if $i;

            my $cond;
            if  (length($chopped_key)==1) {
                $cond= sprintf "%s[%d] == %s", $key_name, $i, $chopped_key=~/\w/ ? "'$chopped_key'" : ord($chopped_key);
            } elsif (length $chopped_key > 1) {
                $cond= sprintf "memEQ(%s+%d,BLOB+%d,%d) /* %s */",
                    $key_name,$i, _index_in_blob($chopped_key), length($chopped_key), $chopped_key;
            }

            my @res;
            if ($pfx) {
                @res = _handle_second_level($hash->{$key},$key_name, $len_name,$depth+1);
            } else {
                @res = _ind(_enum_for_value($hash->{$key}),$depth+1);
            }
            if ($cond) {
                push @code, _indf("if (%s) { /* %s (c)*/",$cond,$pfx.$key,$depth),
                            @res,
                            _ind("}", $depth);
            } else {
                push @code, sprintf "%s /* %s (d)*/", join("\n",@res), $pfx.$key;
            }
        }
    } else {
        my @groups;
        my $best;
        my $best_idx;
        foreach my $idx (0..length($keys[0])-1) {
            my %group;
            foreach my $key (@keys) {
                $group{substr($key,$idx,1)}{$key}= $hash->{$key};
            }
            $groups[$idx]=\%group;
            $best ||= \%group;
            if (keys %group >= keys %$best) {
                $best= \%group;
                $best_idx= $idx;
            }
        }
        if ($best_idx != 0 and (keys(%$best) - keys(%{$groups[0]})) <= 2 and keys %{$groups[0]}>1) {
            $best_idx = 0;
            $best= $groups[0];
        }
        if ($best_idx != $#groups and (keys(%$best) - keys(%{$groups[-1]})) <= 2 and keys %{$groups[-1]}>1) {
            $best_idx = $#groups;
            $best= $groups[-1];
        }
        local $covered->[$best_idx]=1;

        push @code, _indf("switch(%s[%d]) {", $key_name, $best_idx, $depth);
        foreach my $char (sort keys %$best) {
            push @code, _case($char,$depth+1);
            push @code, _handle_keys_same_length($best->{$char},$pfx,$key_name,$len_name,$depth+2,$covered);
            push @code, _ind("break;", $depth+1);
        }
        push @code, _ind("}",$depth);
    }
    return join "\n", @code;
}


sub process_two_level_hash {
    my ($hash, $rhs)= @_;

    my $key_name= "prefix";
    my $len_name= "prefix_len";
    my $suf_name= "suffix";
    my $suf_len_name= "suffix_len";

    my @code;
    push @code, _indf("int parse_property_name(const char * const %s,const STRLEN %s,const char * const %s, const STRLEN %s) {",
            $key_name, $len_name, $suf_name, $suf_len_name, 0);
    push @code, _indf("const char* const %s2= %s+2;",$key_name, $key_name,1);
    push @code, "";
    push @code, _indf("if (%s==1) {",$len_name,1);
    push @code, _indf("switch (%s[0]) {",$key_name,2);

    foreach my $key (sort keys %$hash) {
        if (length $key == 1) {
            my $val= delete $hash->{$key};
            push @code, _case($key,3);
            push @code, _handle_second_level($val,$key_name,$len_name,4);
            push @code, _ind("break;",4);
        }
    }
    push @code, _ind("}",2);
    push @code, _indf("} else if (%s>1) {",$len_name,1);

    push @code, _switch_two_chars($hash,$rhs,$key_name,$len_name,2);

    push @code, _ind("}",1);
    push @code, _ind("return 0;",1);
    push @code, "}";

    return join "\n",@code,"";
}

my $ALL_KEYS;
sub build_two_level_hash {
    do "../perl/lib/unicore/Heavy.pl";
    my @k;
    my %struct;
    # $loose_proprty_to_file_of{$loose_property_name_of{$lhs}}
    my %hash_to_check;
    my %two_level;
    my %rhs_keys;
    my %tests;
    {
        no warnings 'once';
        my %rev;
        foreach my $key (sort keys %utf8::loose_property_name_of) {
            my $v= $utf8::loose_property_name_of{$key};
            push @{$rev{$v}}, $key unless $key eq $v;
        }
        foreach my $key (sort keys %utf8::loose_to_file_of) {
            $tests{$key}=$key;
            my ($lhs,$rhs)= split /=/, $key;
            $rhs_keys{$rhs}= $key if $rhs;
            $two_level{$lhs}{$rhs//""}= $key;
        }
        foreach my $key (sort keys %two_level) {
            $EXTRACT{0+$two_level{$key}}= $key."_suffix";
            foreach my $rkey (@{$rev{$key}}) {
                my $suffixes= $two_level{$rkey}= $two_level{$key};
                foreach my $suffix (sort keys %$suffixes) {
                    $tests{length($suffix) ? "$rkey=$suffix" : $rkey}= length($suffix) ? "$key=$suffix" : $key;
                }
            }
        }
    }
    if (1) {
        my $buf;
        foreach my $prefix (sort keys %two_level) {
            foreach my $suffix (sort keys %{$two_level{$prefix}}) {
                my $full= length $suffix ? "$prefix=$suffix" : $prefix;
                $buf .= $full . "\0\0\0";
            }
        }
        $ALL_KEYS = $buf;
    }
    return (\%two_level, \%rhs_keys, \%tests);
}

my ($two_level, $rhs, $tests)= build_two_level_hash();
my $main= process_two_level_hash($two_level, $rhs);

my @code;
push @code, "const unsigned char * const BLOB =\n";
my $blob_len= length $BLOB;
warn "Final blob size is $blob_len\n";
while (length($BLOB)) {
    push @code, sprintf qq(    "%s"), substr($BLOB,0,65,"");
    push @code, length $BLOB ? "\n" : ";\n";
}
push @code, "/* BLOB length: $blob_len */\n";
push @code, $main,"\n";
$DEBUG or s/ \(\w\)/ /g for @code;

{
    open my $ofh,">","uni_prop_parser.c"
        or die "Failed to open 'uni_prop_parser.c': $!";
    print $ofh "#include <string.h>\n";
    print $ofh "#include <stdio.h>\n";
    print $ofh "#define memEQ(s1,s2,l) (memcmp(s1,s2,l) == 0)\n";
    print $ofh "#define STRLEN int\n";
    print $ofh @code;
    print $ofh <<'ENDMAIN';
int main(int argc, char *argv[]){
    int i;
    for (i=1; i<argc; i++) {
        char *key = argv[i];
        int key_len = strlen(key);
        char *key_end = key + key_len;
        char *prefix = key;
        char *suffix = index(key,'=');
        int suffix_len;
        int prefix_len;
        if (suffix) {
            suffix++;
            prefix_len = suffix - prefix - 1;
            suffix_len = key_end - suffix;
        } else {
            prefix_len = key_len;
            suffix_len = 0;
        }
        printf("key=%s prefix=%.*s (%d) suffix=%.*s (%d)\n", key, prefix_len, prefix, prefix_len, suffix_len, suffix, suffix_len);
        printf("got: %d\n", parse_property_name(prefix,prefix_len,suffix,suffix_len));
    }
}
ENDMAIN
    close $ofh;
}

{
    open my $ofh, ">", "uni_prop_parser_test.pl";
    my $num_tests= 0+keys %$tests;
    print $ofh "use strict;\nuse warnings;\nuse Test::More tests => $num_tests;\nmy \$res;";
    foreach my $key (sort keys %$tests) {
        my $val= $tests->{$key};
        my $want= $ENUM_SEEN{$val};
        print $ofh "\$res= `./uni_prop_parser '$key'`;\nok(\$res=~/got: (\\d+)/ && \$1 == $want,'$key');\n";
    }
    close $ofh;
}
__END__
