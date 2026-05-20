//C program for Celsius to fahrenheit

#include <stdio.h>
int main () {
    int celsius, fahrenheit;
    printf("Enter the value of Celsius:\n");
    scanf("%d", &celsius);
    fahrenheit = ((9.0/5.0)*celsius) + 32;// 9.0/5.0 prevents integer division
    printf("Fahrenheit = %d", fahrenheit);
    return 0;
}
