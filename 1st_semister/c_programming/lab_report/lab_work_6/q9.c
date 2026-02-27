#include <stdio.h>

// Function to calculate sum of digits
int sumOfDigits(int num) {
    int sum = 0;
    if (num < 0) num = -num; // Handle negative numbers
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}