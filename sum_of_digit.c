// C program to calculate sum of digits

#include<stdio.h>

int main () 
{
    int digit, num, sum = 0;

    printf("Enter the number:\n");
    scanf("%d", &num); // Taking input from user

    // Calculating sum of digits using while loop
    while (num != 0) {

        digit = num % 10;   // getting last digit
        sum = sum + digit;  // adding digit into sum
        num = num / 10;     // removing last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}