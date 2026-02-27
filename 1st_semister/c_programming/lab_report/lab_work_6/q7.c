#include <stdio.h>

// Function to find maximum of two numbers
int maxOfTwo(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Maximum of %d and %d is %d\n", n1, n2, maxOfTwo(n1, n2));
    return 0;
}