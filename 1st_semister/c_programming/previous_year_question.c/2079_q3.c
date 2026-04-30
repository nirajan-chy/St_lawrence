// Write a program to demonstrate the following menu-driven program. The user will provide an integer and alphabet for making choice and the corresponding task has to be performed according as follow:

// Find Odd or Even
// Find Positive or Negative
// Find the Factorial value
// Exit
// The choice will be displayed until the user will give “D” as a choice.

#include <stdio.h>

// Function for factorial
long long factorial(int n) {
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int num;
    char choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        printf("\n----- MENU -----\n");
        printf("A. Find Odd or Even\n");
        printf("B. Find Positive or Negative\n");
        printf("C. Find Factorial\n");
        printf("E. Enter a new number\n");
        printf("D. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice); 

        switch (choice) {

            case 'A':
            case 'a':
                if (num % 2 == 0)
                    printf("Even Number\n");
                else
                    printf("Odd Number\n");
                break;

            case 'B':
            case 'b':
                if (num > 0)
                    printf("Positive Number\n");
                else if (num < 0)
                    printf("Negative Number\n");
                else
                    printf("Zero\n");
                break;

            case 'C':
            case 'c':
                if (num >= 0)
                    printf("Factorial = %lld\n", factorial(num));
                else
                    printf("Factorial not defined for negative numbers\n");
                break;

            case 'E':
            case 'e':
                printf("Enter new number: ");
                if (scanf("%d", &num) != 1) {
                    // clear invalid input
                    int ch;
                    while ((ch = getchar()) != '\n' && ch != EOF) ;
                    printf("Invalid input. Number unchanged.\n");
                } else {
                    printf("Number updated to %d\n", num);
                }
                break;

            case 'D':
            case 'd':
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 'D' && choice != 'd');

    return 0;
}
