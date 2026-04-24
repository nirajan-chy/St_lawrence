#include <stdio.h>

// Define structure
struct Book {
    char Book_Name[50];
    float Price;
    char Author_Name[50];
};

int main() {
    struct Book b[10];
    int i;

    // Input
    for(i = 0; i < 10; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book Name: ");
        scanf(" %[^\n]", b[i].Book_Name);

        printf("Author Name: ");
        scanf(" %[^\n]", b[i].Author_Name);

        printf("Price: ");
        scanf("%f", &b[i].Price);
    }

    // Display authors with price > 1000
    printf("\nAuthors with book price greater than 1000:\n");

    for(i = 0; i < 10; i++) {
        if(b[i].Price > 1000) {
            printf("%s\n", b[i].Author_Name);
        }
    }

    return 0;
}