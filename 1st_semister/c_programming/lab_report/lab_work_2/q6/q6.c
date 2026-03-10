#include <stdio.h>

int main(void) {
    int m = 12;
    int n = 5;

    printf("m & n = %d\n", m & n);
    printf("m | n = %d\n", m | n);
    printf("m ^ n = %d\n", m ^ n);
    printf("~m = %d\n", ~m);
    printf("m << 2 = %d\n", m << 2);
    printf("n >> 1 = %d\n", n >> 1);

    return 0;
}
