#include <stdio.h>

void input(int a[10][10], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
}

void multiply(int a[10][10], int b[10][10], int m[10][10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            m[i][j] = 0;
            for (int k = 0; k < c1; k++)
                m[i][j] += a[i][k] * b[k][j];
        }
    }
}

void display(int a[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main() {
    int a[10][10], b[10][10], m[10][10];
    int r1, c1, r2, c2;

    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) return 0;

    input(a, r1, c1);
    input(b, r2, c2);

    multiply(a, b, m, r1, c1, c2);
    display(m, r1, c2);

    return 0;
}
