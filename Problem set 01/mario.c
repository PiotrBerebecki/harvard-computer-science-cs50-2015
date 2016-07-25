/*
-----------------------------------------
Create a Super Mario's half pyramid
-----------------------------------------

Write a program that asks a user for input between 1 and 23 (inclussive)
and then creates a Super Mario half-pyramid of a given height.

Example:

If height is then the program returns a half pyramid which consist of 8 rows.
The first row has always two hashes.

       ##
      ###
     ####
    #####
   ######
  #######
 ########
#########

Take care to align the bottom-left corner of your half-pyramid with 
the left-hand edge of your terminal window.
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    // Declare variables
    int height;
    int row;
    int space;
    int hash;
    
    // Prompt user for integer until integer is 1 to 23
    do
    {
        printf("Please enter the height from 1 to 23: ");
        height = GetInt();
    }
    while (height < 1 || height > 23);
    
    // Outer for loop for each row 
    for (row = 0; row < height; row++)
    {
        
        // First inner for loop for spaces
        for (space = height - row - 1; space > 0; space--)
        {
            printf(" ");
        }
        
        // Second inner for loop for hashes
        for (hash = 0; hash < row + 2; hash++)
        {
            printf("#");
        }
        
        // Print new line character at the end of each row
        printf("\n");
        
    }
    
}
