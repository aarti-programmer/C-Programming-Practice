// Program for simple Calculator 

#include <stdio.h>

int main() {
    int a, b;
    char oper;
    
    printf("Enter the value of a and b \n");
    scanf("%d %d", &a, &b);// Taking input from user
    printf("select the operator : '+', '-', '*', '/' \n");
    scanf(" %c", &oper);// Space before %c ignores newline character
    
    //Calculator logic
    if (oper == '+') {
        printf("Addition = %d", a+b);
    } else if (oper == '-') {
        printf("Subtraction = %d", a-b);
    } else if (oper == '*') {
        printf("Multiplication = %d", a*b);
    } else if (oper == '/') {
        printf("Division = %d", a/b);
    } else {
        printf("Invalid Input:\n");
    }
    return 0;
}
