// C program to print right triangle star pattern using nested loops

#include<stdio.h>

int main() {

    int i, j, row;

    // taking number of rows from user
    printf("Enter the number of rows:\n");

    scanf("%d", &row);

    // outer loop for rows
    for(i = 0; i < row; i++) {

        // inner loop for printing stars
        for(j = 0; j <= i; j++) {

            printf("* ");
        }

        // moving cursor to next line after each row
        printf("\n");
    }

    return 0;
}