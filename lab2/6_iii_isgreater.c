//iii.	WAP to read two numbers. If first is greatest than second number, then display its difference else display the sum of them.
#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers: \n");
    scanf("%d%d",&num1,&num2);
    num1 > num2 ?
    printf("Difference = %d \n",num1-num2) :
    printf("Sum = %d \n",num1+num2);
    return 0;
}