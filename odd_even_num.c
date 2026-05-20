// C program to find odd or even number

#include<stdio.h>

int main() {

    int num;

    printf("Enter a number:\n");

    scanf("%d", &num);

    // checking odd-even condition
    if(num % 2 == 0) {

        printf("Even Number");
    }

    else {

        printf("Odd Number");
    }

    return 0;
}