/*
-----------------------------------------
Minimum number of coins for change
(aka Time for change)
-----------------------------------------

A greedy algorithm is one "that always takes the best immediate, or local, 
solution while finding an answer.

Write a program that first asks the user how much change is owed and then 
spits out the minimum number of coins with which said change can be made.

Assume that the only coins available are 
quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢).
*/

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    
    int changeOwed;
    int denominations[] = { 25, 10, 5, 1 };
    int coinsCount = 0;

    do 
    {
        printf("How much change is owed?\n");
        changeOwed = round(GetFloat() * 100);
    }
    while (changeOwed < 1);
    
    
    for (int i = 0; i < 4; i++)
    {
        
        while (changeOwed >= denominations[i])
        {
            changeOwed = changeOwed - denominations[i];
            coinsCount++;
        }
        
    }
    
    printf("%i\n", coinsCount);
    
}