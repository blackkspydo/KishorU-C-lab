//10. WAP to read string from keyboard and count the number of vowels, consonants, spaces, semicolons, and commas in that string.
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    int vowels = 0,consonants = 0,spaces = 0,semicolons = 0,commas = 0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowels++;
        }
        else if(str[i]==' '){
            spaces++;
        }
        else if(str[i]==';'){
            semicolons++;
        }
        else if(str[i]==','){
            commas++;
        }
        else{
            consonants++;
        }
    }
    printf("Vowels: %d  Consonants: %d  Spaces: %d  Semicolons: %d  Commas: %d",vowels,consonants,spaces,semicolons,commas);
    return 0;
}
