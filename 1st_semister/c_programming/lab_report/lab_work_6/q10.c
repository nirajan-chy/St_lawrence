#include <stdio.h>

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    int sign = (num < 0) ? -1 : 1;
    num = (num < 0) ? -num : num; // Handle negative numbers
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed * sign;
}

int main() {
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);
    printf("Reversed number: %d\n", reverseNumber(num));
    return 0;
}
