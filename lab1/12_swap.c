//12.Two numbers are input through the keyboard into two variables A and B. WAP to swap the content of A and B.
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    printf("Before swapping: \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}