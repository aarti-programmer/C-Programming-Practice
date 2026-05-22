// C program to calculate factorial of a number using for loop

#include<stdio.h>

int main () 
{
    int fact = 1, i, num;

    printf("Enter the number: ");
    scanf("%d", &num); // Taking input from user

    // Calculating factorial using for loop
    for (i = num; i >= 1; i--) 
    {
        fact = fact * i;
    }

    printf("Factorial of %d = %d", num, fact);

    return 0;
}