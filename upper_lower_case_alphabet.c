// C program to check whether alphabet is uppercase or lowercase

#include<stdio.h>

int main ()
{
    char alphabet;

    printf("Enter the alphabet:\n");
    scanf(" %c", &alphabet); // Taking character input from user

    // Checking uppercase and lowercase using ASCII values
    if (alphabet >= 65 && alphabet <= 90) 
    {
        printf("'%c' = Uppercase", alphabet);
    } 
    
    else if (alphabet >= 97 && alphabet <= 122) 
    {
        printf("'%c' = Lowercase", alphabet);
    } 
    
    else 
    {
        printf("Invalid input");
    }

    return 0;
}