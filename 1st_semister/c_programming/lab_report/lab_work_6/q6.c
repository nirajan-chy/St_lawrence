#include <stdio.h>

// Function to find factorial
unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d = %llu\n", num, factorial(num));
    return 0;
}