#include <stdio.h>
#include <string.h>

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

union StudentID {
    char dlNumber[20];
    char citizenshipNumber[20];
    char passportNumber[20];
};

int main(void) {
    struct Student s1 = {1, "Nirajan", 88.5f};
    struct Student students[5];
    union StudentID id;
    int choice;

    printf("Initialized Student:\n");
    displayStudent(s1);

    printf("\nEnter details for 5 students:\n");
    for (int i = 0; i < 5; ++i) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- All Students Details ---\n");
    for (int i = 0; i < 5; ++i) {
        displayStudent(students[i]);
    }

    printf("\nChoose ID Type:\n");
    printf("1. Driving License\n");
    printf("2. Citizenship\n");
    printf("3. Passport\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter DL Number: ");
            scanf("%19s", id.dlNumber);
            printf("DL Number: %s\n", id.dlNumber);
            break;
        case 2:
            printf("Enter Citizenship Number: ");
            scanf("%19s", id.citizenshipNumber);
            printf("Citizenship Number: %s\n", id.citizenshipNumber);
            break;
        case 3:
            printf("Enter Passport Number: ");
            scanf("%19s", id.passportNumber);
            printf("Passport Number: %s\n", id.passportNumber);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
