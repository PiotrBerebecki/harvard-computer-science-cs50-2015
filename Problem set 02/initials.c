/*
-----------------------------------------
Initializing
-----------------------------------------

Write a program that prompts a user for their name
(using GetString to obtain their name as a string).
and then outputs their initials in uppercase with no spaces or periods, 
followed by a newline (\n) and nothing more. 

You may assume that the user’s input will contain only letters 
(uppercase and/or lowercase) plus single spaces between words.

Folks like Joseph Gordon-Levitt, Conan O’Brien, and David J. Malan 
won’t be using your program.

So that we can automate some tests of your code, your program must behave 
per the examples below.

username:~/workspace/pset2 $ ./initials
Zamyla Chan
ZC

username:~/workspace/pset2 $ ./initials
robert thomas bowden
RTB
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>


int main(int argc, string argv[])
{
    
    // Prompt user for name
    string name = GetString();
    
    // Print the first letter in uppercaase
    printf("%c", toupper(name[0]));
    
    // Loop through all characters
    for (int i = 1, len = strlen(name); i < len; i++)
    {
        // Check if character is blank
        if (isblank(name[i]))
        {
            // Print the character that follows the blank
            printf("%c", toupper(name[i+1]));
        }
    }
    
    printf("\n");
    
}