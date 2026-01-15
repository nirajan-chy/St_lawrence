#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 50

typedef struct {
    int id;
    char name[NAME_LEN];
    float marks;
} Student;

void addStudent(Student **students, int *count);
void displayStudents(Student *students, int count);
void saveToFile(Student *students, int count);
void loadFromFile(Student **students, int *count);

int main() {
    Student *students = NULL;
    int count = 0;
    int choice;

    loadFromFile(&students, &count);

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(&students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                saveToFile(students, count);
                printf("Data saved. Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);

    free(students);
    return 0;
}

void addStudent(Student **students, int *count) {
    *students = realloc(*students, (*count + 1) * sizeof(Student));
    if (*students == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    Student *s = &(*students)[*count];

    printf("Enter ID: ");
    scanf("%d", &s->id);

    printf("Enter Name: ");
    scanf(" %[^\n]", s->name);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);

    (*count)++;
}

void displayStudents(Student *students, int count) {
    if (count == 0) {
        printf("No students available.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\nID: %d", students[i].id);
        printf("\nName: %s", students[i].name);
        printf("\nMarks: %.2f\n", students[i].marks);
    }
}

void saveToFile(Student *students, int count) {
    FILE *fp = fopen("students.dat", "wb");
    if (!fp) {
        printf("File open error!\n");
        return;
    }

    fwrite(&count, sizeof(int), 1, fp);
    fwrite(students, sizeof(Student), count, fp);
    fclose(fp);
}

void loadFromFile(Student **students, int *count) {
    FILE *fp = fopen("students.dat", "rb");
    if (!fp) return;

    fread(count, sizeof(int), 1, fp);
    *students = malloc(*count * sizeof(Student));
    fread(*students, sizeof(Student), *count, fp);
    fclose(fp);
}
