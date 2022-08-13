#include<stdio.h>
void increment(int*a){
    *a+=1;
}

int main(){
    int a=4;
    increment(&a);
    int arr[3]={2,3,4};
    printf("%d %d\n",arr,&arr);
    printf("%d %d\n",*arr,*&arr);
    printf("%d",a);
    return 0;
}