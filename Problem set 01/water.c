/*
-----------------------------------------
How many bottles of water you use while taking a shower
-----------------------------------------

Write a program which askes user for the duration of their shower
and then spits out the number of bottles of water used.

Assume that 1 minute of shower = 12 bottles of water.
*/

#include <cs50.h>
#include <stdio.h>

int getBottles(time)
{
    return time * 12;
}

int main(void)
{
    printf("minutes: ");
    
    int time = GetInt();
    
    // printf("bottles: %i\n", time * 12); // Calculate direclty in the printf
    
    printf("bottles: %i\n", getBottles(time)); // or call a function that return the result
}