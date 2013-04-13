# lexer for the delbrot scripting language
# translates source file characters into tokens

use feature "switch";

# open files for reading/writing
open(INFILE, 'scannedsource');
open(OUTFILE, '>lexedsource');

# read scannedsource into an array for easier lexing
@source = <INFILE>;

# main lexing loop
while (1) {
    # get a line
    $line = @source[$lineindex++];
    chomp($line);

    # split line into appropriate variables
    ($linenumber, $charnumber, my $char) = split(' ', $line);
        
    # break if terminating statement encountered
    if ($linenumber eq "END") {
        last;
    }
    
    # add chars until a token is created or an error occurs
    process($char);
}

# add EOF terminator
print OUTFILE "END";

# close files
close(OUTFILE);
close(INFILE);

### END MAIN BODY ###

# error handler
sub error {
    # get arguments
    $errormsg = @_[0];

    # printer error message and line number to STDERR
    print STDERR "failed!\nACDC: error (line $linenumber): $errormsg\n";

    exit(-1);
}

# process characters based on expected token
sub process {
    # get argument
    my $char = @_[0];
    $char = chr($char);

    # process char
    given ($char) {
        # newlines mark end of a statement
        when (/\n/) {
            print OUTFILE "TERMINATOR \\n\n";
        }
        # hashes indicate a comment
        when (/\#/) {
            $token = readwhile('[^\n]');
            print OUTFILE "COMMENT $token\n";
        }
        # ignore other whitespace characters
        when (/\s/) {
            return;
        }
        # identifier
        when (/[A-z]/) {
            $token = $char . readwhile('[A-z]');
            print OUTFILE "IDENTIFIER $token\n";
            return;
        }
        # symbol
        when (/[=|(|)|,|.]/) {
            print OUTFILE "SYMBOL $char\n";
        }
        # string
        when (/\"/) {
            $token = $char . readwhile('[^"]');
            print OUTFILE "STRING $token\"\n";
        }
        # number
        when (/\d/) {
            $token = $char . readwhile('\d');
            print OUTFILE "NUMBER $token\n";
        }
        default {
            error("unrecognized symbol \"$char\" (missing quotation mark?)");
        }
    }
}

# read in new characters while they satisfy a given condition
sub readwhile {
    # get argument
    my $goodchar = @_[0];

    # read in until stop character reached
    my $rest = ""; my $char;
    $char = chr((split(' ', @source[$lineindex++]))[2]);
    while ($char =~ /$goodchar/) {
        if (ord($char) == "\n") { error("invalid string (missing quotation mark?)"); }
        $rest .= $char;
        $char = chr((split(' ', @source[$lineindex++]))[2]);
    }
    # move back lineindex since we're looking ahead one line
    # not for strings though!
    if ($goodchar ne '[^"]') {
        $lineindex--;
    }

    return $rest;
}