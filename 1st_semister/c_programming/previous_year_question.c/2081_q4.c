#include <stdio.h>

/*
Question 4:
Write a C program to read a square matrix of order n and
find the sum of its principal diagonal and secondary diagonal.
*/

int main(void) {
    int n, i, j;
    int principal = 0, secondary = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        principal += a[i][i];
        secondary += a[i][n - 1 - i];
    }

    printf("Sum of principal diagonal = %d\n", principal);
    printf("Sum of secondary diagonal = %d\n", secondary);

    return 0;
}
