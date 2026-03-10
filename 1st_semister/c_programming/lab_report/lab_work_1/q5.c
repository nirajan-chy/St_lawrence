#include <stdio.h>

int main(void) {
    float principal = 5000.0f;
    float rate = 7.5f;
    float time = 2.0f;
    float interest = (principal * rate * time) / 100.0f;

    printf("Simple Interest = %f\n", interest);
    return 0;
}
