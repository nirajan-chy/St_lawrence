#include <stdio.h>

int main() {
    int num_1, num_2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num_1, &num_2);

    printf("The sum of %d and %d = %d\n", num_1, num_2, num_1 + num_2);

    return 0;
}
