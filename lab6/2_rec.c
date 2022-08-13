//WAP to find the sum of 1+11+111+1111+... using recursive function. Ask users the number of terms. For example if users says 4, find the sum of 1+11+111+1111.
#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1)*10+1;
}
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int sum1=0;
    for(int i=1;i<=n;i++){
        sum1+=sum(i);
    }
    printf("%d",sum1);
    return 0;
}
