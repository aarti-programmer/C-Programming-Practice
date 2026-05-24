// C program to print alphabet right triangle pattern using nested loops

#include<stdio.h>

int main() {

    int i, rows;
    char j;

    // taking number of rows from user
    printf("Enter the number of rows:\n");

    scanf("%d", &rows);

    // outer loop for rows
    for(i = 1; i <= rows; i++) {

        // inner loop for printing alphabets
        for(j = 'A'; j <= 64 + i; j++) {

            printf("%c ", j);
        }

        // moving cursor to next line after each row
        printf("\n");
    }

    return 0;
}