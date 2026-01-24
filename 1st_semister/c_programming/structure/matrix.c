#include <stdio.h>

// Define structure
struct Matrix {
    int m[3][3];
};

// Function to multiply two matrices
struct Matrix multiply(struct Matrix A, struct Matrix B) {
    struct Matrix C;
    int i, j, k;

    // Initialize result matrix with 0
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C.m[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                C.m[i][j] += A.m[i][k] * B.m[k][j];
            }
        }
    }

    return C;
}

int main() {
    struct Matrix A, B, C;
    int i, j;

    // Input first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A.m[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B.m[i][j]);
        }
    }

    // Function call
    C = multiply(A, B);

    // Display result
    printf("Resultant matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C.m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
