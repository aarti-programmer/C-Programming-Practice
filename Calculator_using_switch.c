#include<stdio.h>
int main () {
    float a, b;
    char choice;

    printf("Enter the operator : '+', '-', '*', '/' \n");
    if ((scanf(" %c", &choice)==1) && (choice == '+' || choice=='-' || choice=='*' || choice=='/') ) {
    printf("Enter the two number:\n");
    scanf("%f %f", &a, &b);

    switch (choice)
    {
    case '+':
        printf("Addition = %f", a+b);
        break;

    case '-':
        printf("Subtraction = %f", a-b);
        break;
    
    case '*':
        printf("Multiplication = %f", a*b);
        break;

    case '/':
        printf("division = %f", a/b);
    
    default:
        break;
    }

    } else {
        printf("-----Invalid Input------");
    }
return 0;
    
}