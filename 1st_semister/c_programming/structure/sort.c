#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char title[50];
    float price;
};

void sortByPrice(struct Book b[], int n) {
    int i, j;
    struct Book temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (b[j].price > b[j + 1].price) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Book b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &b[i].id);
        printf("Name: ");
        scanf("%s", b[i].name);
        printf("Title: ");
        scanf("%s", b[i].title);
        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    sortByPrice(b, n);

    printf("\nBooks sorted by price:\n");
    printf("ID\tName\tTitle\tPrice\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%s\t%.2f\n", b[i].id, b[i].name, b[i].title, b[i].price);
    }

    return 0;
}
