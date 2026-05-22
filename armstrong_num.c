// C program to check Armstrong number

#include<stdio.h>

int main () 
{
    int digit, num, sum = 0, original;

    printf("Enter the number:\n");
    scanf("%d", &num); // Taking input from user

    original = num; // Storing original number

    // Calculating Armstrong sum using while loop
    while (num != 0) 
    {
        digit = num % 10; // Getting last digit

        sum = sum + (digit * digit * digit); // Adding cube of digit into sum

        num = num / 10; // Removing last digit
    }

    printf("Sum of digits = %d\n", sum);

    // Checking Armstrong condition
    if (original == sum) 
    {
        printf("%d is an Armstrong number", original);
    } 
    
    else 
    {
        printf("%d is not an Armstrong number", original);
    }

    return 0;
}