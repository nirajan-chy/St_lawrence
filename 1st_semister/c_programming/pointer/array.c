#include<stdio.h>
int main(){
  int arr[5] = { 1 , 2, 3, 4, 5 };
  for(int i =0; i<5 ;i++){
    printf("%d \t" , *(arr + i)); // 1 2 3 4 5
    printf("%d \t" , *(arr));  // 1 1 1 1 1
  }
  return 0;
}

