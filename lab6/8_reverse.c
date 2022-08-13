//*WAP to reverse a number using recursive function.
#include<stdio.h>
int reverse(int num, int rev)
{
    if(num==0)
        return rev;
    else
        return reverse (num/10, rev*10 + num%10);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d",reverse(n,0));
    return 0;
}