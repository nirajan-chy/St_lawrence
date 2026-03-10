#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    ptr = arr;  // pointer points to first element of array

    printf("Array values using pointer:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
