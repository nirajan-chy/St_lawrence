#include <stdio.h>

union StudentID {
    char dlNumber[20];
    char citizenshipNumber[20];
    char passportNumber[20];
};

int main(void) {
    union StudentID id;
    int choice;

    printf("Choose ID Type:\n");
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
