#include <stdio.h>

int main() {
    // Step 1: Declare variables
    int num1 = 45;
    int num2 = 9;
    int sum, difference, product;

    // Step 2: Perform operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Step 3: Print the results
    printf("Addition of %d and %d = %d\n", num1, num2, sum);
    printf("Subtraction of %d and %d = %d\n", num1, num2, difference);
    printf("Multiplication of %d and %d = %d\n", num1, num2, product);

    return 0;
}