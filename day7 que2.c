# Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a single alphabet character: ");
    scanf(" %c", &ch); // space before %c to consume any leftover newline

    if (isalpha(ch)) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("The character is a vowel.\n");
        else
            printf("The character is a consonant.\n");
    } else {
        printf("Invalid input. Please enter a single alphabet letter.\n");
    }

    return 0;
}
