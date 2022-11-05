/* WAP to append some text to a file by reading filename from user */
#include <stdio.h>

int main(void)
{
  
    FILE *fp;
    fp = fopen("demo.txt", "a");
    fprintf(fp, "I am studying well for board exam");
    fclose(fp);
    return 0;
}