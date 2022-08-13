#include<stdio.h>
int main(){
    char name[25],address[50];
    int age;
    printf("enter your name");
    scanf("%[^\n]s",name);
    printf("enter your age");
    // getchar();
    scanf("%d",&age);
    printf("enter your address");
    getchar();
    scanf("%[^\n]s",address);
    return 0;
}