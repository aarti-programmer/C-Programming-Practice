// C program to count digits in a number

#include<stdio.h>

int main () 
{
    int num, digit, count = 0;

    printf("Enter the number:\n");
    scanf("%d", &num); // Taking input from user

    // Counting digits using while loop
    while (num != 0) 
    {
        digit = num % 10;

        num = num / 10;

        count++;
    }

    printf("Total digits = %d", count);

    return 0;
}