// 10.	WAP to calculate:
// a.	Sum
// b.	Difference
// c.	Multiplication
// d.	Division
// of two numbers by reading the user’s choice.
#include<stdio.h>
int main(){
    int num1,num2,choice;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter choice: \n1. Sum\n2. Difference\n3. Multiplication\n4. Division\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Sum of %d and %d is %d\n",num1,num2,num1+num2);
            break;
        case 2:
            printf("Difference of %d and %d is %d\n",num1,num2,num1-num2);
            break;
        case 3:
            printf("Multiplication of %d and %d is %d\n",num1,num2,num1*num2);
            break;
        case 4:
            printf("Division of %d and %d is %d\n",num1,num2,num1/num2);
            break;
        default:
            printf("Invalid input");
            break;
    }
    return 0;
}