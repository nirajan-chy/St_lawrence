#include<stdio.h>
int main(){
    int num;
    int sum = 0 ;
    printf("Enter a number : ");
    scanf("%d" , &num);
    for(int i = 0 ;i<=num ; i++){
        sum += i ;
    }
    printf("The sum of %d = %d " ,num , sum );
}