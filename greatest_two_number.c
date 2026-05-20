// C program to find the greatest of two numbers

#include<stdio.h>

int main() 
{
    int a, b;

    printf("Enter the value of a and b :\n");
    scanf("%d %d", &a, &b); // Taking input from user
    printf("A = %d : B = %d\n", a,b);

    // Checking greatest number condition
    if (a > b) 
    {
        printf("A is the greatest number");
    } 
    
    else if (b > a) 
    {
        printf("B is the greatest number");
    } 
    
    else 
    {
        printf("Both numbers are equal");
    }

    return 0;
}
