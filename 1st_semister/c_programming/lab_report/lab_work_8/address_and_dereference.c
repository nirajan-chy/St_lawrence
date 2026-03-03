#include <stdio.h>

int main(void) {
    int value = 42;
    int *pointer_to_value = &value;

    printf("Value: %d\n", value);
    printf("Address stored in pointer: %p\n", (void *)pointer_to_value);
    printf("Dereferenced pointer value: %d\n", *pointer_to_value);

    *pointer_to_value = 84;
    printf("Updated value via dereferencing: %d\n", value);

    return 0;
}
