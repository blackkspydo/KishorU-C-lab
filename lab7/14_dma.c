/* WAP to read an array of integers using DMA and display the maximum
and minimum value */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)calloc(5, sizeof(int));
    int *arrP = arr;
    int max = 0, min = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", arrP + i);
        if (i == 0)
        {
            max = *(arrP + i);
            min = *(arrP + i);
        }
        else
        {
            if (*(arrP + i) > max)
            {
                max = *(arrP + i);
            }
            if (*(arrP + i) < min)
            {
                min = *(arrP + i);
            }
        }
    }
    printf("Maximum value is %d and minimum value is %d", max, min);
    return 0;
}