#include<stdio.h>

int main() {
    int principle;
    int time;
    int rate;

    printf("Enter Principle \n");
    scanf("%d", &principle);

    printf("Enter time \n");
    scanf("%d", &time);

    printf("Enter rate \n");
    scanf("%d", &rate);

    int interest = (principle * time * rate) / 100;

    printf("The interest = %d\n", interest);

    return 0;
}
