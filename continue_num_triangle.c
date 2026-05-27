// C program to print continuous number triangle pattern using nested loops

#include<stdio.h>

int main() {

    int i, j, rows, num = 1;

    // taking number of rows from user
    printf("Enter the number of rows:\n");

    scanf("%d", &rows);

    // outer loop for rows
    for(i = 1; i <= rows; i++) {

        // inner loop for printing continuous numbers
        for(j = 1; j <= i; j++) {

            printf("%d ", num);

            // incrementing number after every print
            num++;
        }

        // moving cursor to next line after each row
        printf("\n");
    }

    return 0;
}