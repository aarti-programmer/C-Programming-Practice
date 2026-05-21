// C program to reverse a number

#include<stdio.h>

int main () 
{
    int digit, reverse = 0, num;

    printf("Enter the number:\n");
    scanf("%d", &num); // Taking input from user

    // Reversing the number using while loop
    while (num != 0) 
    {
        digit = num % 10;

        reverse = reverse * 10 + digit;

        num = num / 10;
    }

    printf("Reverse number = %d", reverse);

    return 0;
}