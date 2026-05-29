// C program to print reverse continuous number triangle pattern using nested loops

#include<stdio.h>

int main() {

    int i, j, rows;

    // taking number of rows from user
    printf("Enter the number of rows:\n");

    scanf("%d", &rows);

    // outer loop for rows
    for(i = rows; i >= 1; i--) {

        // inner loop for printing reverse continuous numbers
        for(j = 1; j <= i; j++) {

            printf("%d ", j);

        }
        
        // moving cursor to next line after each row
        printf("\n");
    }

    return 0;
}