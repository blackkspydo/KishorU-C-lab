#include<stdio.h>
int *larger(int *, int *);
int main(){
    int num1, num2, *ptr;
    printf("Enter any two numbers");
    scanf("%d%d",&num1,&num2);
    ptr = larger(&num1,&num2);
    printf("larger num is %d",*ptr);
    return 0;
}

int *larger(int * num1, int* num2){
    if(*num1>num2){
        return num1;
    }else{
        return num2;
    }
}