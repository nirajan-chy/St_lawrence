#include <stdio.h>

int main(void) {
    int num = 20;

    printf("num = %d\n", num);
    num += 5;
    printf("num += 5 : %d\n", num);
    num -= 3;
    printf("num -= 3 : %d\n", num);
    num *= 2;
    printf("num *= 2 : %d\n", num);
    num /= 4;
    printf("num /= 4 : %d\n", num);
    num %= 7;
    printf("num %%= 7 : %d\n", num);

    return 0;
}
