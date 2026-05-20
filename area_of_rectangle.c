// Program to calculate area of rectangle

#include <stdio.h>

int main() {

    int length, breadth, area;

    printf("Enter the length and breadth of rectangle:\n");

    scanf("%d %d", &length, &breadth);

    area = length * breadth;

    printf("Area of rectangle: %d", area);

    return 0;
}
