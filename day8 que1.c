# Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch); // space before %c to consume any leftover newline

    if (isupper(ch))
        printf("Uppercase alphabet\n");
    else if (islower(ch))
        printf("Lowercase alphabet\n");
    else if (isdigit(ch))
        printf("Digit\n");
    else
        printf("Special character\n");

    return 0;
}
