//WAP to find HCF (GCD) and LCM using recursive function.
#include<stdio.h>
int hcf(int a,int b){
    if(b==0){
        return a;
    }
    return hcf(b,a%b);
}
int lcm(int a,int b){
    return a*b/hcf(a,b);
}
int main(){
    int a,b;
    printf("Enter the number: ");
    scanf("%d %d",&a,&b);
    printf("HCF: %d LCM: %d",hcf(a,b),lcm(a,b));
    return 0;
}