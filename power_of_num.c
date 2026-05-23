// C program to calculate power of a number using for loop

#include<stdio.h>

int main () 
{
    int base, power, result = 1, i;

    printf("Enter the base and power:\n");
    scanf("%d %d", &base, &power); // Taking input from user

    // Calculating power using for loop
    for (i = 1; i <= power; i++) 
    {
        result = result * base;
    }

    printf("%d raised to the power %d = %d", base, power, result);

    return 0;
}