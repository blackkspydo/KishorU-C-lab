//1.	WAP to ask a number from user and find whether the number is even or odd.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is even\n",num);
    }
    else{
        printf("%d is odd\n",num);
    }
    return 0;
}