// C program to print even and odd numbers using do-while loop

#include<stdio.h>

int main () 
{
    int i = 1, j = 20;

    // Printing even numbers from 1 to 20
    do 
    {
        if (i % 2 == 0) 
        {        
            printf("Even Number : %d\n", i);
        }

        i++;

    } while (i <= 20);

    // Printing odd numbers from 19 to 1
    do 
    {
        if (j % 2 != 0) 
        {
            printf("Odd Number : %d\n", j);
        }

        j--;

    } while (j >= 1);

    return 0;
}