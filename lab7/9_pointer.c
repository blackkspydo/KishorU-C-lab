/* WAP to display the address and value of a variable using pointer */

#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("Address of a is %p  and value of a is %d\n", p, *p);
    return 0;
}