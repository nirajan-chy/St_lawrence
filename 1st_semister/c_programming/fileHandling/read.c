#include<stdio.h>
int main(){
  FILE *fp;
  char ch;
  fp = fopen("writee.txt" , "r"); // open file
  if(fp == NULL){
    printf("File cannot be opnened");
    return 1;
  }
  while((ch = fgetc(fp)) !=EOF){
    printf("%c" , ch); // hello world
  }
  fclose(fp);  // close
  return 0 ;
}