#include <stdio.h>

int main(void) {
    int p, q, i, j;

    printf("Enter number of rows (P): ");
    if (scanf("%d", &p) != 1 || p <= 0) {
        printf("Invalid input for rows.\n");
        return 1;
    }

    printf("Enter number of columns (Q): ");
    if (scanf("%d", &q) != 1 || q <= 0) {
        printf("Invalid input for columns.\n");
        return 1;
    }

    int matrix[p][q];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid matrix input.\n");
                return 1;
            }
        }
    }

    printf("\nLargest element in each row:\n");

    for(i = 0; i < p; i++) {
        int max = matrix[i][0];
        int max_col = 0;

        for(j = 1; j < q; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
                max_col = j;
            }
        }

        printf("Row %d: %d (Column %d)\n", i + 1, max, max_col + 1);
    }

    return 0;
}
