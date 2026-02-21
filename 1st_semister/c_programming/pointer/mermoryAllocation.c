#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    // Ask user for array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    arr = (int*) malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input values
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display values
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free allocated memory
    free(arr);

    return 0;
}