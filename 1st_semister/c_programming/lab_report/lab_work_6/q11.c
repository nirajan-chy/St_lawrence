#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    if (num < 0) return 0; // Negative numbers are not palindrome
    int reversed = 0, original = num;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return (original == reversed) ? 1 : 0;
}

int main() {
    int num;
    printf("Enter a number to check palindrome: ");
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}