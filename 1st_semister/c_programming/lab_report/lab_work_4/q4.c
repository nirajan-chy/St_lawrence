#include <stdio.h>

int main() {
    int i = 1;  // Start from 1

    printf("Even numbers between 1 and 50 are:\n");

    while (i <= 50) {
        if (i % 2 == 0) {  // Check if the number is even
            printf("%d\t", i);
        }
        i++;  // Increment i
    }

    return 0;
}