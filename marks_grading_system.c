// C program to calculate student grade using marks

#include<stdio.h>

int main () 
{
    int num;

    printf("Enter the marks:\n");
    scanf("%d", &num); // Taking marks input from user

    // Checking grade condition
    if (num >= 90 && num <= 100) 
    {
        printf("A Grade : Pass");
    } 
    
    else if (num >= 60 && num <= 89) 
    {
        printf("B Grade : Pass");
    } 
    
    else if (num >= 55 && num <= 59) 
    {
        printf("C Grade : Pass");
    } 
    
    else if (num >= 35 && num <= 54) 
    {
        printf("D Grade : Pass");
    } 
    
    else if (num >= 1 && num <= 34) 
    {
        printf("E Grade : Fail");
    } 
    
    else 
    {
        printf("Invalid Input");
    }

    return 0;
}