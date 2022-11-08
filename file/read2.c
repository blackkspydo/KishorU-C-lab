#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("./test.txt", "r");
    if (fptr == NULL)
    {
        printf("File doesnot exist\n");
        return 1;
    }
    printf("File exists:\n");
    char ch;
    while (ch != EOF)
    {
        ch = fgetc(fptr);
        printf("%c", ch);
    }

    fclose(fptr);
    return 0;
}