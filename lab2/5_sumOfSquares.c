//WAP to read 5-digit number and find the sum of square of each digit.
#include <stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a 5-digit number: \n");
    scanf("%d",&num);
    while(num != 0){
        sum += (num%10)*(num%10);
        num = num/10;
    }
    printf("Sum of square of digits = %d\n",sum);
    return 0;
}