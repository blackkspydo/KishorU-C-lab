// 6.	Solve the following problem using ternary operator.
// i.	WAP to read a number and print whether the number is even or odd.
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    printf("%s\n",(num%2 == 0)?"Even":"Odd");
    return 0;
}
