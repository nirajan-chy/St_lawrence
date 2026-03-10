#include <stdio.h>

int main(void) {
    int num = 10;
    int *ptr;

    ptr = &num;  // address-of operator stores num's address

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);

    printf("Pointer ptr stores address = %p\n", (void *)ptr);

    // dereferencing operator
    printf("Value at address stored in ptr = %d\n", *ptr);

    return 0;
}
