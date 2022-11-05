/* WAP to create a file named student.txt and write name, roll, address, and
marks of a student to this file */

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[20], address[20];
    int roll, marks;

    fp = fopen("student.txt", "w");

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter roll: ");
    scanf("%d", &roll);
    printf("Enter address: ");
    scanf("%s", address);
    printf("Enter marks: ");
    scanf("%d", &marks);

    fprintf(fp, "Name: %s   Roll: %d    Address: %s    Marks: %d", name, roll, address, marks);

    fclose(fp);

    return 0;
}