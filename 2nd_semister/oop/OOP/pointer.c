#include<stdio.h>
int main(){
  int a = 20;
  int *ptr = &a; 
  printf("%d \n" , *ptr); 
  printf("%d \n" , a); 
  printf("%p \n" , &a); 

}