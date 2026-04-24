#include <stdio.h>

// Call by Value
void value(int x) {
    x = x + 10;
    printf("Inside value(): x = %d\n", x);
}

// Call by Reference
void reference(int *x) {
    *x = *x + 10;
    printf("Inside reference(): x = %d\n", *x);
}

int main() {
    int num = 5;

    printf("Before value(): num = %d\n", num);
    value(num);
    printf("After value(): num = %d\n\n", num);

    printf("Before reference(): num = %d\n", num);
    reference(&num);
    printf("After reference(): num = %d\n", num);

    return 0;
}