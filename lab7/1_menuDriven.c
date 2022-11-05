/*Write a menu driven program which performs the following jobs:
a. Create a structure named student with member variables: roll, name,
grade, gender, age.
b. Define ten structure variables of type student and using loop take
input for all ten structure variables.
c. Display names of all male students.
d. Exit. */

#include <stdio.h>
#include <string.h>

#define MAX 10

struct student
{
    int roll;
    char name[20];
    char grade;
    char gender;
    int age;
};

int main()
{
    struct student s[MAX];
    for (int i = 0; i < MAX; i++)
    {
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter grade: ");
        scanf(" %c", &s[i].grade);
        printf("Enter gender:");
        scanf(" %c", &s[i].gender);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
    }
    printf("\nMale students are: \n");
    for (int i = 0; i < MAX; i++)
    {
        if (s[i].gender == 'm' || s[i].gender == 'M')
        {
            printf("Name: %s\n", s[i].name);
        }
    }

    return 0;
}