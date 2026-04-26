#include<stdio.h>
int fibonacci(int n){
  int a = 0 , b = 1 ,  c , i;
  if(n <= 0){
    return -1;
  }
  if(n == 1){
    return a;
  }
  if(n==2){
    return b;
  }
  for(i = 3 ; i <= n ; i++){
    c = a + b ;
    a = b ;
    b = c;
  }
  return b;
}
 int isPrime( int n ){
  int i ;
  if(n<=1) return 0;
  for(i = 2; i * i <= n; i++){
    if(n % i ==0) return 0;
  }
  return 1;
   }

  int main(void){
    int n  , fib;
    printf("Enter a number :");
    if (scanf("%d", &n) != 1 || n <= 0) {
      printf("Invalid input. Please enter a positive integer.\n");
      return 1;
    }
    fib = fibonacci(n);
     printf("The %dth Fibonacci term is %d\n", n, fib);

    if (isPrime(fib))
        printf("%d is a Prime number.\n", fib);
    else
        printf("%d is NOT a Prime number.\n", fib);

    return 0;

   }
