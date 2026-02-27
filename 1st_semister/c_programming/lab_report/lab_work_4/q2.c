#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user for input
    printf("Enter a positive number n: ");
    scanf("%d", &n);

    // Loop from 1 to n and add each number to sum
    for (int i = 1; i <= n; i++) {
        sum += i;  // sum = sum + i
    }

    // Print the result
    printf("The sum of the first %d numbers is %d\n", n, sum);

    return 0;
}