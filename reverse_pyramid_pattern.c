// C program to print inverted pyramid star pattern using nested loops

#include<stdio.h>

int main() {

    int i, j, k, rows;

    // taking number of rows from user
    printf("Enter the number of rows:\n");

    scanf("%d", &rows);

    // outer loop for rows
    for(i = 1; i <= rows; i++) {

        // printing leading spaces
        for(j = 1; j < i; j++) {

            printf(" ");
        }

        // printing stars
        for(k = rows; k >= i; k--) {

            printf(" *");
        }

        // moving cursor to next line after each row
        printf("\n");
    }

    return 0;
}