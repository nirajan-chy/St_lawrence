#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;  // Keep original number

    while (temp != 0) {
        sum += temp % 10;  // Add last digit
        temp /= 10;        // Remove last digit
    }

    printf("Sum of digits of %d is %d\n", n, sum);

    return 0;
}