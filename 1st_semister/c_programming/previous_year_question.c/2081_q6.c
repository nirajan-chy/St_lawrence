#include <stdio.h>

/*
Question 6:
Write a C program to read a sentence and count
vowels, consonants, digits, spaces and special characters.
*/

int main(void) {
    char ch;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, special = 0;

    printf("Enter a sentence (press Enter to finish):\n");

    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            char lower = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else {
            special++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Special characters: %d\n", special);

    return 0;
}
