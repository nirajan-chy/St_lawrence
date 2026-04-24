#include <stdio.h>

int main(void) {
    int p, q, i, j;

    printf("Enter number of rows (P): ");
    scanf("%d", &p);

    printf("Enter number of columns (Q): ");
    scanf("%d", &q);

    int matrix[p][q];

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find largest element in each row
    printf("\nLargest element in each row:\n");

    for(i = 0; i < p; i++) {
        int max = matrix[i][0];   // assume first element is largest

        for(j = 1; j < q; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }

        printf("Row %d: %d\n", i + 1, max);
    }

    return 0;
}
