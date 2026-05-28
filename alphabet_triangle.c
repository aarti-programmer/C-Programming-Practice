// C program to print repeated alphabet triangle pattern using nested loops

#include<stdio.h>

int main() {

    int i, j, rows;
    char ch = 'A';

    // taking number of rows from user
    printf("Enter the number of rows:\n");

    scanf("%d", &rows);

    // outer loop for rows
    for(i = 1; i <= rows; i++) {

        // inner loop for printing repeated alphabets
        for(j = 1; j <= i; j++) {

            printf("%c ", ch);
        }

        // moving to next alphabet after each row
        ch++;

        // moving cursor to next line after each row
        printf("\n");
    }

    return 0;
}