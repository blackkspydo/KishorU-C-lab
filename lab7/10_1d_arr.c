/* WAP that accesses array elements of a one-dimensional array using
pointers */
#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p;
    p = a;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
    return 0;
}
