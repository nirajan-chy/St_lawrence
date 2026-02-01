#include <stdio.h>

void addTen(int x) {
    x = x + 10;  
}

int main() {
    int num = 5;
    addTen(num);
    printf("num = %d\n", num); 
    return 0;
}
