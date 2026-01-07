#include<stdio.h>
int findMax(int a , int b);
int main(){
  int num1 , num2;
  printf("Enter two number ");
  scanf("%d%d" , &num1 , &num2);
  printf("The maximum number : %d" , findMax(num1 , num2));
}
int findMax(int a , int b){
  if(a>b) return a;
  if(a<b) return b;
}