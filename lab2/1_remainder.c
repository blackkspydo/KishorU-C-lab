//1.WAP to read two numbers n1 and n2 from keyboard. Calculate and display remainder obtained by dividing n1 by n2.
#include <stdio.h>
int main(){
    int n1,n2,remainder;
    printf("Enter two numbers: \n");
    scanf("%d%d",&n1,&n2);
    remainder = n1 % n2;
    printf("Remainder = %d \n",remainder);
    return 0;
}