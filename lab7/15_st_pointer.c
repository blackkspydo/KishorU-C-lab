/* WAP where a function accepts a string and a character. The function
should look for the first occurrence of the character in the string and
return a pointer to that location */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    char ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character: ");
    scanf("%c", &ch);
    char *strP = str;
    char *chP = &ch;
    char *loc = strchr(strP, *chP);
    printf("Location of %c in %s is %ld", *chP, strP, loc);
    return 0;
}
