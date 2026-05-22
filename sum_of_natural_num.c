// C program to calculate the sum of first 10 natural numbers

#include<stdio.h>

int main () 
{
    int i = 1, sum = 0;

    // Calculating sum using while loop
    while (i <= 10) 
    {
        sum = sum + i;

        i++;
    }

    printf("Total sum = %d", sum);

    return 0;
}