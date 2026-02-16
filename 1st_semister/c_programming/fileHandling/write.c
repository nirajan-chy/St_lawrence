#include<stdio.h>
int main(){
  FILE *fp;
  fp = fopen("writee.txt" , "w");
  fprintf(fp , "Hello bunny");
  fclose(fp);
  return 0;

}