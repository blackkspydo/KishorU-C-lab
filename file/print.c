#include <stdio.h>
int main()
{
    FILE *fl;

    fl = fopen("./student.txt", "w");
    char name[40];
    char sex;
    int age, roll;

    fprintf(fl, "%s\t\t\t%s\t%s\t%s\n", "Name", "Age", "Roll", "Sex\n");
    printf("Enter Name:");
    scanf("%[^\n]s", name);
    printf("Enter Age:");
    scanf("%d", &age);
    printf("Enter ROll:");
    scanf("%d", &roll);
    getchar();
    printf("Enter Sex:");
    scanf("%c", &sex);
    fprintf(fl, "%s\t%d\t%d\t%c\n", name, age, roll, sex);
    fclose(fl);
    return 0;
}