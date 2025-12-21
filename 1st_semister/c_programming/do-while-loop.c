// write a program that keeps asking the user for a number until they enter a positive value, using a do-while loop

#include<stdio.h>
int main (){
    int n  ;
    do
    {
        printf("Guess a number:  \n");
        scanf("%d" , &n);
    } while (n<0);
    printf("Congratulation you have won the match ");
    
}