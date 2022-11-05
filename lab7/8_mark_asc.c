/*WAP to read records of n different students in structure and sort on the
basis of marks in ascending order. */

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
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j].marks > s[j + 1].marks)
            {
                struct student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("Students in ascending order of marks are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %d\n", s[i].marks);
    }
    return 0;
}