//C program for divisible by 5 or not 

#include<stdio.h>

int main () {
    int div;
    printf("Enter the value :\n");
    scanf("%d", &div);
    if (div % 5 == 0) {
        printf("Divisible by 5:\n");
    } else {
        printf("Not divisible by 5:\n");
    }
    return 0;
}