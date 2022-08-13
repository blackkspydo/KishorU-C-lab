// two dimension matrix addition
#include <stdio.h>

void input(int size, int (*mat)[size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter %dx%d ",i,j);
            scanf("%d", *(mat + i) + j);
        }
    }
}

void display(int size, int (*mat)[size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}
void add(int size, int (*mat1)[size], int (*mat2)[size], int (*mat3)[size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            *(*(mat3 + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
}
int main(void)
{
    int size;
    printf("Enter number of rows: ");
    scanf("%d",&size);
    int mat1[size][size];
    printf("Enter data for matrix 1: \n");
    input(size, mat1);
    int mat2[size][size] ;
    printf("Enter data for matrix 2: \n");
    input(size,mat2);
    int mat3[size][size];
    int(*matP_m1)[size] = mat1;
    int(*matP_m2)[size] = mat2;
    int(*matP_m3)[size] = mat3;
    add(size, matP_m1, matP_m2, matP_m3);
    display(size, matP_m1);
    printf("\n+ \n\n");
    display(size, matP_m2);
    printf("\n= \n\n");
    display(size, matP_m3);
    return 0;
}