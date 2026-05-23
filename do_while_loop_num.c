// C program to print numbers using do-while loop

#include <stdio.h>

int main() {

    int i = 10;

    // printing numbers from 10 to 1
    do {

        printf("%d ", i);

        i--;

    } while(i >= 1);

    printf("\n");

    int j = 1;

    // printing numbers from 1 to 10
    do {

        printf("%d ", j);

        j++;

    } while(j <= 10);

    return 0;
}