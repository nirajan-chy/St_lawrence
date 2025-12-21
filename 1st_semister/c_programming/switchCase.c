#include<stdio.h>
void main(){
   int day ;
   printf("Enter the day \n");
   scanf("%d" , &day);
   switch(day){
    case 1 :
    printf("sunday");
    break;
    case 2 :
    printf("Monday");
    break;
    case 3 :
    printf("Tuesday");
    break;
    case 4:
    printf("wednesday");
    break;
    default:
    printf("Invalid day");
   }
}