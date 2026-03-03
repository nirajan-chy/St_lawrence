#include <stdio.h>

int main(void) {
    int numbers[5] = {3, 6, 9, 12, 15};
    int *ptr = numbers;

    printf("Array values using pointers:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Index %d -> %d\n", i, *(ptr + i));
    }

    return 0;
}
