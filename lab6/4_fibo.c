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
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int series=fibo(i);
        printf("%d",series);
        if(i==n){
            printf("\n");
            return 0;
        }
        printf(",");
    }
    printf("\n");
    return 0;
}
