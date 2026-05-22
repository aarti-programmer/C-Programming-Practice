// C program to print multiplication table of any number

#include<stdio.h>

int main () 
{
    int i = 1, num, result;

    printf("Enter the number:\n");
    scanf("%d", &num); // Taking input from user

    // Printing multiplication table using while loop
    while (i <= 10) 
    {
        result = num * i;

        printf("%d * %d = %d\n", num, i, result);

        i++;
    }

    return 0;
}