// C program to check palindrome number

#include<stdio.h>

int main () 
{
    int digit, reverse = 0, num, original;

    printf("Enter the number:\n");
    scanf("%d", &num); // Taking input from user

    original = num; // Storing original number

    // Reversing the number using while loop
    while (num != 0) 
    {
        digit = num % 10;

        reverse = reverse * 10 + digit;

        num = num / 10;
    }

    printf("Reverse number = %d\n", reverse);

    // Checking palindrome condition
    if (original == reverse)
    {
        printf("Palindrome number");
    }

    else
    {
        printf("Not a palindrome number");
    }

    return 0;
}