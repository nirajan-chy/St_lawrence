#include <stdio.h>

// Function to add two numbers
int addTwoNumbers(int a, int b) {
    return a + b;
}

int main() {
    int n1, n2;
    printf("Enter two integers to add: ");
    scanf("%d %d", &n1, &n2);
    printf("Sum = %d\n", addTwoNumbers(n1, n2));
    return 0;
}