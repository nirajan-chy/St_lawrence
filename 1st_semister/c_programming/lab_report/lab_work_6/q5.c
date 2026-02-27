#include <stdio.h>

// Function to print numbers from 1 to N
void printNumbers(int N) {
    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int N;
    printf("Enter N to print numbers from 1 to N: ");
    scanf("%d", &N);
    printNumbers(N);
    return 0;
}
