#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open file in read mode
    file = fopen("hello.txt", "r");

    // Check if file exists
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and display file contents
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    // Close file
    fclose(file);

    return 0;
}