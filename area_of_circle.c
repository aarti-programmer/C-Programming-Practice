// C program to calculate area of circle

#include<stdio.h>

int main () {

    float pi = 3.14, r, area;

    printf("Enter the radius of circle :\n");
    scanf("%f", &r); // Taking radius input from user

    // Formula to calculate area of circle
    area = pi * r * r;

    printf("Area of circle : %f", area);

    return 0;
}
