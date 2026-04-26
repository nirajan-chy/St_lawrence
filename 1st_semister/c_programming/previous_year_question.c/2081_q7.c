#include <stdio.h>

/*
Question 7:
Write a C program to read n numbers, sort them in ascending order,
and display the second largest number.
*/

int main(void) {
    int n, i, j, temp;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("At least 2 elements are required.\n");
        return 1;
    }

    int a[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted numbers: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    for (i = n - 2; i >= 0; i--) {
        if (a[i] != a[n - 1]) {
            printf("\nSecond largest number: %d\n", a[i]);
            return 0;
        }
    }

    printf("\nNo distinct second largest number exists.\n");

    return 0;
}
