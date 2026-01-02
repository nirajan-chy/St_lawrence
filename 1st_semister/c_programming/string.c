#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello World";
    printf("Initialized string: %s\n", str1);

    char str2[50];
    printf("\nEnter a string: ");
    scanf(str2, sizeof(str2), stdin);
    printf("You entered: %s", str2);

    char str3[50] = "Programming";

    printf("\nLength of '%s' is: %lu\n", str3, strlen(str3));

    char copy[50];
    strcpy(copy, str3);
    printf("Copied string: %s\n", copy);

    strcat(copy, " in C");
    printf("After concatenation: %s\n", copy);

    if (strcmp(str1, str3) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}
