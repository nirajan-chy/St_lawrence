#include<stdio.h>
int main(){
    int num ;
    int fact = 1;
    printf("Enter a number :\t");
    scanf("%d" , &num);
    for(int i = 1 ; i<=num ; i++){
        fact *= i;
    }
    printf("The factorial of %d  = %d \t " ,num , fact);
    return 0;
}