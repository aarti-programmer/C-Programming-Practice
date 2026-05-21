// C program to check whether triangle is valid or not using angles

#include<stdio.h>

int main () 
{
    int a, b, c;

    printf("Enter the three angles of triangle:\n");
    scanf("%d %d %d", &a, &b, &c); // Taking angle input from user

    // Checking valid triangle condition
    if ((a + b + c == 180) && (a > 0 && b > 0 && c > 0)) 
    {
        printf("Triangle is valid");
    } 
    
    else 
    {
        printf("Triangle is not valid");
    }

    return 0;
}