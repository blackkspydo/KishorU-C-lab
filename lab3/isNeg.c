//5.	WAP to ask a number from user and test whether the number is negative.
#include<stdio.h>
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if(num<0){
        printf("%d is negative",num);
    }
    else{
        printf("%d is positive",num);
    }
    printf("\n");
    return 0;
}