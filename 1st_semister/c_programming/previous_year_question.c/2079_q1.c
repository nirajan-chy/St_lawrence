//  Write a program to find the value of x^y without using POW code
#include<stdio.h>
int main(){
  int x = 4 ;
  int y = 2;
  int result = 1;
  int i;
  for(i = 0 ; i< y ; i++){
  result *= x;
  }
  printf("%d ^ %d = %d" , x , y , result  );
  return 0;
}