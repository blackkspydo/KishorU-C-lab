//WAP to find sum of digit of number using recursive function. For example, if user gives 482, then calculate 4+8+2.
#include<stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    return n%10+sum(n/10);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}