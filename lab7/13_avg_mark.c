/* WAP to calculate average marks of 5 students in a subject using pointer
*/
#include <stdio.h>

int main(void)
{
    int marks[5];
    int *marksP = marks;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", marksP + i);
        sum += *(marksP + i);
    }
    printf("Average marks of 5 students is %d", sum / 5);
    return 0;
}