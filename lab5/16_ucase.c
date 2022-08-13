//16. WAP to convert the string into upper case characters using in-built function.
#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++){
        str[i]=toupper(str[i]);
    }
    printf("%s",str);
    return 0;
}