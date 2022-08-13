#include<stdio.h>
int main(){
    int var = 25;
    int *ptr;
    int **pptr;
    int ***ppptr;
    ptr = &var;
    pptr = &ptr;
    ppptr=&pptr;
    printf("Value of var = %d\n",var);
    printf("Value available at *ptr = %d\n",*ptr);
    printf("Value available at *pptr = %d\n",**pptr);
    printf("Value available at *ppptr = %d\n",***ppptr);

    return 0;
}