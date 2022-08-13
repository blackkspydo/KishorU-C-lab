//12. WAP to read a string from the keyboard and copy the string onto the second string and display the strings on to the monitor.
#include<stdio.h>
int main(){
    char str[100],str2[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    // scanf("%[^\n]%*c",str);
    for(int i=0;str[i]!='\0';i++){
        str2[i]=str[i];
    }
    printf("%s %s",str,str2);
    return 0;
}
