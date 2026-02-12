#include<stdio.h>

int main(){
  int a = 6;
  char name[209] = "samir mero vai ho ";
  
  int *p = &a;
  char *q = name;   

  // for int 
  printf("Value of a = %d \t", a);
  printf("Address of a = %p \t", p);
  printf("Value using pointer = %d \t", *p);

  // for char
  printf("\nValue of name = %s \t", name);
  printf("Address of name = %p \t", q);
  printf("Value using pointer = %s \t", q);

  return 0;
}
