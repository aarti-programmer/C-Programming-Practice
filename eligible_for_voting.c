//C program to find who eligible for voting

#include<stdio.h>
int main () {
    int age;
    printf("Enter your age :\n");
    scanf("%d", &age);//taking input from user

    //Checking condition for voting eligibility
    if(age >= 18) {
        printf("Eligible for voting");
    } else {
        printf("Not eligible for voting:\n");
    }
    return 0;
}