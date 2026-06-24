#include<stdio.h>

int divide(int a , int b , int *result){
  if(b == 0 ) return -1; //error
  *result = a / b;
  return 0 ; // success
}
int main() {
    int result;

    if (divide(10, 0, &result) == -1) {
        printf("Error: Cannot divide by zero\n");
    } else {
        printf("Result = %d\n", result);
    }

    return 0;
}