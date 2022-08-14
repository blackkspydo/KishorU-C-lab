#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("./tesdt.txt", "r");
    if (fptr == NULL)
    {
        printf("File doesnot exist\n");
        return 1;
    }
    printf("File exists:\n");
    char str[100];
    fgets(str, 100, fptr);
    printf("\n%s\n", str);
    fclose(fptr);
    return 0;
}