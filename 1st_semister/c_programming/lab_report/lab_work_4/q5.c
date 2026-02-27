#include <stdio.h>

int main() {
    int number;

    // Keep asking until a positive number is entered
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("That's not a positive number. Try again.\n");
        }
    } while (number <= 0);  // Repeat if number is not positive

    printf("You entered a positive number: %d\n", number);

    return 0;
}