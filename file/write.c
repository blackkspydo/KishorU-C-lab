#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("./test.txt", "w");
    if (fptr == NULL)
    {
        printf("File cannot be created");
        return 1;
    }
    printf("File created");
    char ch[10] = "heloooo";
    fputs(ch, fptr);
    fclose(fptr);
    return 0;
}