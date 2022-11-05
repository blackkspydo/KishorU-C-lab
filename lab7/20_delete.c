/* WAP where a text file is given and another text file should be created
deleting all the vowels (a, e, i, o, u) */

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "w");

    while ((ch = fgetc(fp1)) != EOF)
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            fputc(ch, fp2);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
