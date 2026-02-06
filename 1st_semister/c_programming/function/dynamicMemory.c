#include <stdio.h>
#include <stdlib.h>

void input(int *a, int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);
}

void reverse(int *a, int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = *(a + i);
        *(a + i) = *(a + n - i - 1);
        *(a + n - i - 1) = temp;
    }
}

void display(int *a, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
}

int main() {
    int n;
    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));
    if (a == NULL) return 0;

    input(a, n);
    reverse(a, n);
    display(a, n);

    free(a);
    return 0;
}
