#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main(void) {
    struct Student students[5];

    for (int i = 0; i < 5; ++i) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf("%49s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 5; ++i) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
