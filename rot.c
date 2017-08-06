#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Compile this program with:
//      cc -std=c99 -Wall -Werror -pedantic -o rot rot.c

int ROT = 13;

//  The rotate function returns the character ROT positions further along the
//  alphabetic character sequence from c, or c if c is not lower-case

char rotate(char c)
{
        // Check if c is lower-case or not
        if (islower(c))
        {
                // The ciphered character is ROT positions beyond c,
                // allowing for wrap-around
                // c - 'a' produces a number that represents how far away c is from 'a'
                // %26 handles wrap-around
                return ('a' + (c - 'a' + ROT) % 26);
        }
        else if (isupper(c))
        {
                return ('A' + (c - 'A' + ROT) % 26);
        }
        else
        {
                return c;
        }
}

//  Execution of the whole program begins at the main function

int main(int argc, char *argv[])
{
        // Exit with an error if the number of arguments (including
        // the name of the executable) is less than 2
        if (argc < 2)
        {
                fprintf(stderr, "Usage: rot [# of spaces to shift chars] Text to encrypt");
                exit(EXIT_FAILURE);
        }
        else
        {
                if (isdigit(*argv[1]))
                {
                        ROT = atoi(argv[1]);
                        argv[1] = ""; // replace number with empty string because we don't want to print it out later
                }

                // Loop for word in text
                for (int i = 1; i < argc; i++)
                {
                        int length = strlen(argv[i]);
                        // Loop for every character in text
                        for (int j = 0; j < length; j++)
                        {
                                // Determine and print the ciphered character
                                printf("%i %c %c\n", j, argv[i][j], rotate(argv[i][j]));
                        }
                        printf("\n"); // add new line for each new word/punctuation

                }

                // Print one final new-line character
                printf("\n");

                // Exit indicating success
                exit(EXIT_SUCCESS);
        }
        return 0;
}
