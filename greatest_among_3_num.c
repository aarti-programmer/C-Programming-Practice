// C program to find greatest among 3 numbers

#include<stdio.h>

int main () {

    int a, b, c;

    printf("Enter the 3 values:\n");
    scanf("%d %d %d", &a, &b, &c); // taking input from user

    printf("A = %d : B = %d : C = %d\n", a, b, c);

    // checking condition of greatest numbers
    if (a > b && a > c) {

        printf("A is the greatest number\n");

    } else if (b > a && b > c) {

        printf("B is the greatest number\n");

    } else if (c > a && c > b) {

        printf("C is the greatest number\n");

    } else if (a == b && a > c) {

        printf("A and B are the greatest numbers\n");

    } else if (b == c && b > a) {

        printf("B and C are the greatest numbers\n");

    } else if (a == c && c > b) {

        printf("A and C are the greatest numbers\n");

    } else {

        printf("All numbers are equal\n");

    }

    return 0;
}