#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}
float sub(float a , float b){
    return a - b;
}

int main() {
    int result1 = sum(2, 3);
    float result2 = sub(6.8 , 2.5);
    printf("The sum of a + b = %d \n", result1);
    printf("The sub of a - b = %.2f", result2);
    return 0;
}