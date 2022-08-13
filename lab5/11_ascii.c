//11. WAP to read your name from keyboard and output a list of ASCII codes that represent your name.
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter your name: ");
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++){
        printf("%d ",str[i]);
    }
    return 0;
}