#include <stdio.h>

int globalVar = 100;

void showLocal() {
    int localVar = 50;
    printf("Inside showLocal function:\n");
    printf("Local Variable: %d\n", localVar);
    printf("Global Variable: %d\n", globalVar);
}

int main() {
    printf("Inside main function:\n");

    int mainLocal = 25;
    printf("Main Local Variable: %d\n", mainLocal);
    printf("Global Variable: %d\n", globalVar);

    showLocal();


    return 0;
}
