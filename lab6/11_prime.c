//WAP to check whether a given number is prime or not using recursion.
#include<stdio.h>
int prime(int n,int i){
    if(i==1){
        return 1;
    }
    if(n%i==0){
        return 0;
    }
    return prime(n,i-1);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(prime(n,n/2)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}