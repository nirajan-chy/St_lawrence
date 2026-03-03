#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t size;

    printf("Enter array size: ");
    if (scanf("%zu", &size) != 1 || size == 0) {
        printf("Invalid size input.\n");
        return 1;
    }

    int *values = malloc(size * sizeof(int));
    if (values == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (size_t i = 0; i < size; ++i) {
        printf("Enter value %zu: ", i + 1);
        if (scanf("%d", &values[i]) != 1) {
            printf("Invalid input.\n");
            free(values);
            return 1;
        }
    }

    printf("\nYou entered:\n");
    for (size_t i = 0; i < size; ++i) {
        printf("Index %zu -> %d\n", i, values[i]);
    }

    free(values);
    return 0;
}
