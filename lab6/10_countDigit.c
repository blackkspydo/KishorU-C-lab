//WAP to count digits of a given number using recursion.
#include<stdio.h>
int count(int n){
    if(n==0){
        return 0;
    }
    return 1+count(n/10);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d",count(n));
    return 0;
}
