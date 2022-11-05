/* WAP to pass pointer variable to function, sum them and display after
returning it */
#include <stdio.h>

void sum(int *a, int *b, int *c)
{
    *c = *a + *b;
}

int main(void)
{
    int a, b, c;
    int *aP = &a;
    int *bP = &b;
    int *cP = &c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum(aP, bP, cP);
    printf("Sum of %d and %d is %d", a, b, c);
    return 0;
}