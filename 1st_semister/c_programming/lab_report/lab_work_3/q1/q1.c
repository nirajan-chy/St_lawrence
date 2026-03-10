#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n >= 0) {
        printf("Positive");
    }
    if (n < 0) {
        printf("Negative");
    }

    return 0;
}
