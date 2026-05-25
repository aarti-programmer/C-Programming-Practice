// C program to print square star pattern using nested loops

#include<stdio.h>

int main() {

    int i, j, rows;

    // taking number of rows from user
    printf("Enter the number of rows:\n");

    scanf("%d", &rows);

    // outer loop for rows
    for(i = 1; i <= rows; i++) {

        // inner loop for printing stars
        for(j = 1; j <= rows; j++) {

            printf("* ");
        }

        // moving cursor to next line after each row
        printf("\n");
    }

    return 0;
}