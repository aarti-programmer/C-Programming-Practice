// C program to check whether a number is positive, negative or zero

#include<stdio.h>

int main () 
{
    int num;

    printf("Enter the number :\n");

    // Checking whether user entered a valid integer or not
    // scanf() returns 1 when integer input is successfully read
    if(scanf("%d", &num) == 1) 
    {
        // Checking number condition
        if (num > 0) 
        {
            printf("%d is Positive number", num);
        } 
        
        else if (num < 0) 
        {
            printf("%d is Negative number", num);
        } 
        
        else 
        {
            printf("Number is Zero");
        }
    } 
    
    else 
    {
        printf("-----Invalid Input-----");
    }

    return 0;
}