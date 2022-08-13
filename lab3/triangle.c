// 11. WAP to read sides of a triangle and check the validity of the triangle and
// decide the types of triangle.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
            printf("Equilateral triangle");
        else if (a == b || b == c || a == c)
            printf("Isosceles triangle");
        else
            printf("Scalene triangle");
    }
    else
        printf("Not a triangle");
    return 0;
}
