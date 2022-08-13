#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n, *arr;
    printf("Enter size pf am array: \n");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));
    n++;
    arr = (int *)realloc(arr, n*sizeof(int));
    if (arr == NULL)
        printf("Memory allocation failed");
    else
    {
        printf("Address of elements are :\n");
        for (int i = 0; i < n; i++)
        {
            printf("%ld\n", (arr + i));
        }
    }
    return 0;
}