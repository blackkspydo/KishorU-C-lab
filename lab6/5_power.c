//WAP to find power of a number using recursive function.
#include<stdio.h>
int power(int n,int p){
    if(p==0){
        return 1;
    }
    return n*power(n,p-1);
}
int main(){
    int n,p;
    printf("Enter the number and power: ");
    scanf("%d %d",&n,&p);
    printf("%d",power(n,p));
    return 0;
}
