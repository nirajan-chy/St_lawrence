#include<stdio.h>
int main(){
  int a = 20;
  int *ptr = &a; 
  printf("%d \n" , *ptr); // value
  printf("%d \n" , a); // 20 value
  printf("%p \n" , &a); 

}