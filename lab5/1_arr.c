// 1. WAP to read 10 integers, store it in array and display them.
#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}