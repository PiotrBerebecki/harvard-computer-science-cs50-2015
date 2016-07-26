/*
-----------------------------------------
Vigenère’s cipher
(aka Parlez-vous français?)
-----------------------------------------

Write a program  encrypts messages using Vigenère’s cipher.

This program must accept a single command-line argument: a keyword, key, 
composed entirely of alphabetical characters. If your program is executed 
without any command-line arguments, with more than one command-line argument, 
or with one command-line argument that contains any non-alphabetical character, 
your program should complain and exit immediately, with main returning 1 
(thereby signifying an error that our own tests can detect). 

Otherwise, your program must proceed to prompt the user for a string of plaintext, plain, 
which it must then encrypt according to Vigenère’s cipher with key, 
ultimately printing the result and exiting, with main returning 0.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>


int main(int argc, string argv[])
{
    
    // Accept only 2 arguments
    if (argc != 2)
    {
        printf("Wrong number of arguments");
        return 1;
    }
    
    string key = argv[1];
    int key_len = strlen(key);
    
    // Accept only letters in the key
    for (int i = 0; i < key_len; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("The key can only be an alphabetical character\n");
            return 1;
        }
        else
        {
            key[i] = toupper(key[i]); 
        }
    }
    
    // Prompt for plain text to be ciphered
    string plain = GetString();
    
    for (int i = 0, j = 0, str_len = strlen(plain); i < str_len; i++)
    {
        if (isalpha(plain[i]))
        {
            if (isupper(plain[i]))
            {
                plain[i] = ( ( (plain[i] - 'A') + (key[j % key_len] - 'A') ) % 26 ) + 'A';
                j++;
            }
            else 
            {
                plain[i] = ( ( (plain[i] - 'a') + (key[j % key_len] - 'A') ) % 26 ) + 'a';
                j++;
            }
        }
    }
    
    printf("%s\n", plain);
    return 0;
    
}