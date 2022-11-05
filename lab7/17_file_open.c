/* WAP to open the file named demo.txt, read its content and display it to
screen */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = fopen("demo.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}