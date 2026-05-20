// C program to check whether character is vowel or consonant

#include<stdio.h>

int main() {

    char alphabet;

    // taking character input from user
    printf("Enter the alphabet:\n");

    scanf("%c", &alphabet);

    // checking vowel or consonant condition
    if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' ||
       alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U')
    {
        // printing vowel message
        printf(" %c is a vowel", alphabet);// adding space before %c to make output look clean
    }

    else
    {
        // printing consonant message
        printf(" %c is a consonant", alphabet);// adding space before %c to make output look clean
    }

    return 0;
}