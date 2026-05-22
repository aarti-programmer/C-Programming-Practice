// C program to print numbers from 1 to 10 and 10 to 1 using while loop

#include<stdio.h>

int main () 
{
    int i = 0;

    // Printing numbers from 1 to 10
    while (i <= 9) 
    {
        i++;

        printf("%d\n", i);
    }

    // Printing numbers from 10 to 1
    while (i >= 2) 
    {
        i--;

        printf("%d\n", i);
    }

    return 0;
}