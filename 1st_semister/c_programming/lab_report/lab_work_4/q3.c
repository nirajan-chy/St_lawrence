#include <stdio.h>

int main() {
    int num;

    // Ask the user for the number
    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &num);

    // Display the multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}