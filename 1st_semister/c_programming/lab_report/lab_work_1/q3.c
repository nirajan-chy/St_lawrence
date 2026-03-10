#include <stdio.h>

int main(void) {
    float celsius = 25.0f;
    float fahrenheit = celsius * 9.0f / 5.0f + 32.0f;

    printf("%f Celsius = %f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}
