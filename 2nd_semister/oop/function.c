#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int result = sum(2, 3);
    printf("The sum of a + b = %d", result);
    return 0;
}