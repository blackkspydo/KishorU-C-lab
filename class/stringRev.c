#include<stdio.h>
#include<string.h>
int main(){
    char name[25];
    char rev[25];
   rev=strrev(name);
    printf("enter your name: ");
    scanf("%s",&name);
    puts(rev);
    return 0;
}