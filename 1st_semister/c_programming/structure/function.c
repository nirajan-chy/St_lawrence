#include<stdio.h>
struct student {
  int id ;
  char username[20];
  float marks;
}s;
struct student getStudent(){
  printf("Enter id , username and marks :  ");
  scanf("%d %s %f" , &s.id ,s.username , &s.marks );
  return s;
}
int main(){
 s = getStudent();
 printf("Details : \n id : %d \n username : %s \n marks : %0.2f" , s.id , s.username, s.marks);
  return 0;
}