#include <stdio.h>

// Function to find square
int square(int num) {
    return num * num;
}

int main() {
    int num;
    printf("Enter a number to find its square: ");
    scanf("%d", &num);
    printf("Square of %d = %d\n", num, square(num));
    return 0;
}