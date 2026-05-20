// C program to find greatest among 4 numbers

#include<stdio.h>

int main() {

    int a, b, c, d;

    // taking four number inputs from user
    printf("Enter the 4 numbers:\n");

    scanf("%d %d %d %d", &a, &b, &c, &d);

    // checking greatest number condition
    if(a > b && a > c && a > d) {

        printf("A = %d is the Greatest Number\n", a);
    }

    else if(b > a && b > c && b > d) {

        printf("B = %d is the Greatest Number\n", b);
    }

    else if(c > a && c > b && c > d) {

        printf("C = %d is the Greatest Number\n", c);
    }

    else if(d > a && d > b && d > c) {

        printf("D = %d is the Greatest Number\n", d);
    }

    else {

        // handling equal value cases
        printf("Some values may be equal");
    }

    return 0;
}