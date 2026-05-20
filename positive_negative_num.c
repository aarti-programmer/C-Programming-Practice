// C program to check positive, negative or zero number

#include<stdio.h>

int main() {

    int number;

    printf("Enter number:\n");
    scanf("%d", &number); // Taking input from user

    // Checking number condition
    if(number > 0)
    {
        printf("Positive number");
    }

    else if (number < 0)
    {
        printf("Negative number");
    }

    else
    {
        printf("Number is zero");
    }

    return 0;
}
