use feature 'say';
use strict;
use warnings;
use Carp;

use List::Util qw / min /;
$Data::Dumper::Sortkeys = 1;

my $INF   = 1e9;
my $DEBUG = 0;

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

sub get_split_points {
    my ($s) = $_;
    return {};
}

sub build_buffer {
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

my %h;
while (<>) {
    chomp;
    $h{$_} = 1;
}

use Data::Dumper;
my ($buf,$split_points) = build_buffer( \%h );
print Dumper($split_points),"\n";
print $buf,"\n";
printf "Length: %d\n", length($buf);

