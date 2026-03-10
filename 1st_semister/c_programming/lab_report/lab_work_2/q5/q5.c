#include <stdio.h>

int main(void) {
    int a = 8;
    int b = 12;
    int max = (a > b) ? a : b;

    printf("Maximum = %d\n", max);
    return 0;
}
