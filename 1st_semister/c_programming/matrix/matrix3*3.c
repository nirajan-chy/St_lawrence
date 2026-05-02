#include <stdio.h>

// Function to display a matrix
void displayMatrix(int matrix[3][3], char *name) {
    printf("\n%s:\n", name);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;

    // Input first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Display input matrices
    displayMatrix(A, "Matrix A");
    displayMatrix(B, "Matrix B");

    // Initialize result matrix with 0
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    displayMatrix(C, "Result Matrix (A × B)");

    return 0;
}
