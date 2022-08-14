#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("./test.txt", "a");
    if (fptr == NULL)
    {
        printf("File cannot be created");
        return 1;
    }
    printf("File created");
    char ch[100] = "cha khabar";
    fputs(ch, fptr);
    fclose(fptr);
    return 0;
}