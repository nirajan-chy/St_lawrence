#include <stdio.h>

int main(void) {
    float length = 14.5f;
    float width = 6.0f;
    float area = length * width;
    float perimeter = 2.0f * (length + width);

    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", perimeter);
    return 0;
}
