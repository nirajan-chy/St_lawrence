#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void displayStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main(void) {
    struct Student s1;

    printf("Enter Roll No: ");
    scanf("%d", &s1.roll);
    printf("Enter Name: ");
    scanf("%49s", s1.name);
    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    displayStudent(s1);

    return 0;
}
