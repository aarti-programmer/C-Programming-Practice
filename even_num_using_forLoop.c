// C program to print even numbers from 1 to 100 using for loop

#include<stdio.h> 

int main () 
{
    int i;

    // Printing even numbers from 1 to 100
    for (i = 1; i <= 100; i++) 
    {
        if (i % 2 == 0) 
        {
            printf("Even number : %d\n", i);
        }
    }

    return 0;
}