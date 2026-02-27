#include <stdio.h>
#include <math.h>

int main() {
    int n, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    int digits = 0;

    // Count number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of digits raised to the power of number of digits
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}