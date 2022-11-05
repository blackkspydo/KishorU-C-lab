/* WAP to create a file named demo.txt and write some text “I am studying
well for board exam” to the file */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = fopen("demo.txt", "w");
    fprintf(fp, "I am studying well for board exam");
    fclose(fp);
    return 0;
}
