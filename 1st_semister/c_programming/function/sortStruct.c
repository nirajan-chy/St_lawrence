#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

void input(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].marks);
    }
}

void sortByMarks(struct Student s[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i].marks < s[j].marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int searchById(struct Student s[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (s[i].id == key)
            return i;
    }
    return -1;
}

void display(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d %s %.2f\n", s[i].id, s[i].name, s[i].marks);
    }
}

int main() {
    int n, id;
    struct Student s[50];

    scanf("%d", &n);
    input(s, n);

    sortByMarks(s, n);
    display(s, n);

    scanf("%d", &id);
    int pos = searchById(s, n, id);

    if (pos != -1)
        printf("%s %.2f\n", s[pos].name, s[pos].marks);
    else
        printf("Not Found");

    return 0;
}
