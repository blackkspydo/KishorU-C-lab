//3.	WAP that asks the user for three numbers. Then determine the largest number among them.
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("%d is the largest number",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("%d is the largest number",num2);
    }
    else{
        printf("%d is the largest number",num3);
    }
    printf("\n");
    return 0;
}