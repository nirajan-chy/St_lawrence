#include <stdio.h>

// Function to check even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}

int main() {
    int num;
    printf("Enter a number to check even or odd: ");
    scanf("%d", &num);
    checkEvenOdd(num);
    return 0;
}