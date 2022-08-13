#include<stdio.h>
int main(){
    int *p,age=19;
    char ch[100]="dsdsdsdsds",*chp;
    p=&age;
   
    chp = &ch;
    printf("\nValue of age is %d",age);
    printf("\nIncrement on age is %d",age+1);
    printf("\nAddress of age is %d",p);
    printf("\nAddress of age is %d\n",++p);
    printf("\nAddress of age is %d",chp);
    printf("\nAddress of age is %d\n",++chp);

    return 0;
}