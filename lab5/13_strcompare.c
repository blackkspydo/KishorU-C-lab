//13. WAP to compare two strings using string compare function.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    printf("Enter the two strings: ");
    scanf("%[^\n]s",str1);
    getchar();
    scanf("%[^\n]s",str2);
    int result = strcmp(str1,str2);
    if(result==0){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}