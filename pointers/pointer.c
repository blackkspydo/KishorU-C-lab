#include<stdio.h>
int main(){
    int i=10;
    long l=10;
    float f=10.0;
    double d=10.0;
    char c='a';
    int *p=&i;
    long *t=&l;
    float *q=&f;
    double *r=&d;
    char *s=&c;
    printf("Size of int: %d\n",sizeof(i));
    printf("Size of long: %d\n",sizeof(l));
    printf("Size of float: %d\n",sizeof(f));
    printf("Size of double: %d\n",sizeof(d));
    printf("Size of char: %d\n",sizeof(c));
    printf("Size of int pointer: %d\n",sizeof(p));
    printf("Size of long pointer: %d\n",sizeof(t));
    printf("Size of float pointer: %d\n",sizeof(q));
    printf("Size of double pointer: %d\n",sizeof(r));
    printf("Size of char pointer: %d\n",sizeof(s));
    return 0;
}