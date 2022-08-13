//2.	WAP to read 3-digit number from user and display each digit separately.
#include <stdio.h>
int main(){
    int num;
    printf("Enter a 3-digit number: \n");
    scanf("%d",&num);
    while(num>0){
        printf("%d\n",num%10);
        num = num/10;
    }
    return 0;
}