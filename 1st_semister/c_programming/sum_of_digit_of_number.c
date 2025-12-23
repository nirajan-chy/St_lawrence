#include<stdio.h>
int main(){
    int num ;
    int rem ;
    int sum = 0;
    printf("Enter number : ");
    scanf("%d" , &num );
    while(num!=0){
        rem = num % 10;
        sum += rem ;
        num /= 10;
    }
    printf("The sum of digits of %d = %d " , num , sum);
    return 0;
}