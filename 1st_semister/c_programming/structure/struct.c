#include<stdio.h>
struct student{
  int rollNo;
  char name[20];
}s[100];
int main(){
  int n;
  printf("Enter the number of students less than 100  :");
  scanf("%d" , &n);
  for(int i=0 ; i < n ;i++){
    printf("Enter the roll.No of student  %d : \t" , i+1 );
    scanf("%d" , &s[i].rollNo);
    printf("Enter the Name of student  %d : \t" , i+1 );
    scanf("%s" , s[i].name);
  }
  for(int i = 0 ;i<n;i++){
    printf("Roll No : %d \t  Name : %s \n" , s[i].rollNo , s[i].name);
  }
  return 0;
}