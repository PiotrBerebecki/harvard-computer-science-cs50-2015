/*
-----------------------------------------
Hail, Caesar!
-----------------------------------------

Write a program that encrypts messages using Caesar’s cipher.

Your program must accept a single command-line argument: a non-negative integer.
This will represent the shift in letters.

If your program is executed without any command-line arguments, with more than 
one command-line argument, or with a negative integer, your program should yell 
at the user and return a value of 1 (which tends to signify an error).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>


int main(int argc, string argv[])
{
    
    // Check if only two arguments provided
    if (argc != 2)
    {
        printf("Insufficient arguments\n");
        return 1;
    }

    // Convert to integer representing the shift in letters
    int shift = atoi(argv[1]);
    
    // Check if the integer is non-negative
    if (shift < 0)
    {
        printf("The number cannot be negative\n");
        return 1;
    }
    
    // Promt the user for the plain text to be ciphered
    string plain_text = GetString();
    
    int asciiDiff;
    
    // Loop through all characters in the plain_text
    for (int i = 0, len = strlen(plain_text); i < len; i++)
    {
        
        // Check if the character is a letter
        if (isalpha(plain_text[i]))
    
        {
            // Check if the character is uppercase
            if (isupper(plain_text[i]))
            {
                asciiDiff = 65;
            }
            else
            {
                asciiDiff = 97;
            }
            
            // Apply the shift directly on a letter
            printf( "%c", ((plain_text[i] - asciiDiff + shift) % 26) + asciiDiff );
        }
    
        else
        {
            printf("%c", plain_text[i]);
        }

    }

    printf("\n");
    return 0;
    
}