//9. WAP to count length of a string.
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
    return 0;
}