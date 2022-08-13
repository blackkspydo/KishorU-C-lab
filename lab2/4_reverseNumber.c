//4.WAP to read 5-digit number and reverse it.
#include <stdio.h>
int main(){
    int num,rev = 0;
    printf("Enter a 5-digit number: \n");
    scanf("%d",&num);
    while(num != 0){
        rev = rev*10 + num%10;
        num = num/10;
    }
    printf("Reverse of number = %d\n",rev);
    return 0;
}
