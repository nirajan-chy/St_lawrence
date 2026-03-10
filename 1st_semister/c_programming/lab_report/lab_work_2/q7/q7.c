#include <stdio.h>

int main(void) {
    int val = 10;

    printf("val = %d\n", val);
    printf("++val = %d\n", ++val);
    printf("--val = %d\n", --val);
    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(double) = %zu\n", sizeof(double));
    printf("sizeof(char) = %zu\n", sizeof(char));

    return 0;
}
