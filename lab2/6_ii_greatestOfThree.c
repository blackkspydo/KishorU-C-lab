//ii.	WAP to read three numbers and display the greatest of them
#include <stdio.h>
int main(){
    int num1,num2,num3,greatest;
    printf("Enter three numbers: \n");
    scanf("%d%d%d",&num1,&num2,&num3);
    greatest = (num1 > num2)?(num1 > num3)?num1:num3:(num2 > num3)?num2:num3;
    printf("Greatest of three numbers = %d \n",greatest);
    return 0;
}