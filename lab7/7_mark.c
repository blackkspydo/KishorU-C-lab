 /* WAP to read records of n students and display details of students having highest marks. */

#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    int marks;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }
    int max = s[0].marks;
    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > max)
        {
            max = s[i].marks;
        }
    }
    printf("Students with highest marks are: \n");
    for (int i = 0; i < n; i++)
    {
        if (s[i].marks == max)
        {
            printf("Name: %s\n", s[i].name);
            printf("Roll: %d\n", s[i].roll);
            printf("Marks: %d\n", s[i].marks);
        }
    }
    return 0;
}
