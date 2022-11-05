/*WAP to add two distance in feet-inch system using structure and user
defined function. */

#include <stdio.h>

struct distance
{
    int feet;
    int inch;
};

struct distance add(struct distance d1, struct distance d2)
{
    struct distance d3;
    int temp;
    d3.feet = d1.feet + d2.feet;
    temp = d1.inch + d2.inch;
    if (temp >= 12)
    {
        d3.feet++;
        d3.inch = temp - 12;
    }
    else
    {
        d3.inch = temp;
    }
    return d3;
}

int main()
{
    struct distance d1, d2, d3;
    printf("Enter feet part of first distance: ");
    scanf("%d", &d1.feet);
    printf("Enter inch part of first distance: ");
    scanf("%d", &d1.inch);
    printf("Enter feet part of second distance: ");
    scanf("%d", &d2.feet);
    printf("Enter inch part of second distance: ");
    scanf("%d", &d2.inch);
    d3 = add(d1, d2);
    printf("Sum of distances is: %d feet %d inch", d3.feet, d3.inch);
    return 0;
}