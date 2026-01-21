#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float marks;
    char name[20];
};

int main() {
    struct student s1 = {1, 85.5, "Nirajan"};
    struct student s2 = {2, 92.0, "Samir mero vai ho : Haat dhog gar babu "};

    printf("Student 1:\n");
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n\n", s1.marks);

    printf("Student 2:\n");
    printf("Roll: %d\n", s2.roll);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}
