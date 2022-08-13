//iv.	WAP to read four numbers and print the smallest one.
#include <stdio.h>
int main(){
    int num1,num2,num3,num4,smallest;
    printf("Enter four numbers: \n");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    smallest = (num1 < num2)?(num1 < num3)?(num1 < num4)?num1:num4:num3 < num4?num3:num4:num2 < num3?(num2 < num4)?num2:num4:num3 < num4?num3:num4;
    // using AND 
    // smallest = (num1 < num2 && num1 < num3 && num1 < num4)?num1:((num2 < num3 && num2 < num4)?num2:((num3 < num4)?num3:num4));
    printf("Smallest of four numbers = %d \n",smallest);
   return 0;
}