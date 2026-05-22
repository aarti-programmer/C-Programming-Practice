// C program to print even and odd numbers from 1 to 100 using for loop

#include<stdio.h> 

int main () 
{
    int i;

    // Printing even numbers using if condition
    for (i = 1; i <= 100; i++) 
    {
        if (i % 2 == 0) 
        {
            printf("Even Number : %d\n", i);
        }
    }

    // Printing odd numbers using increment by 2 method
    for (i = 1; i <= 100; i = i + 2) 
    {
        printf("Odd Number : %d\n", i);
    }

    return 0;
}