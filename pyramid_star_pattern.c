// C program to print pyramid star pattern using nested loops

#include<stdio.h>

int main() {

    int i, j, k, row;

    // taking number of rows from user
    printf("Enter the number of rows:\n");

    scanf("%d", &row);

    // outer loop for rows
    for(i = 1; i <= row; i++) {

        // printing leading spaces
        for(j = 1; j <= row - i; j++) {

            printf(" ");
        }

        // printing stars
        for(k = 1; k <= i; k++) {

            printf(" *");
        }

        // moving cursor to next line after each row
        printf("\n");
    }

    return 0;
}