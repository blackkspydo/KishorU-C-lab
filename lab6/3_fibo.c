//WAP to find nth term of Fibonacci series using recursive function
#include<stdio.h>
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d\n",fibo(n));
    return 0;
}