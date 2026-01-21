#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number of element ");
    scanf("%d" ,&n);
    int arr[n];
    for(int i =0; i<n ; i++){
        printf("Enter the elements of array ");
        scanf("%d" ,&arr[i]);
    }
       
        for(int i =0 ;i<n ;i++) {
            printf("%d " , arr[i]);
        }
        return 0;
}