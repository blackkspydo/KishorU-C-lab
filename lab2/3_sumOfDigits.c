//3.WAP to read 4-digit number and print the sum of each digit.
#include <stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a 4-digit number: \n");
    scanf("%d",&num);
    while(num != 0){
        sum += num%10;
        num = num/10;
    }
    printf("Sum of digits = %d\n",sum);
    return 0;
}
