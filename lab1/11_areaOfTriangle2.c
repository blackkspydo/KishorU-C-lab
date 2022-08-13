//11.	WAP to read three sides of a triangle and calculate the area.
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter three sides of a triangle: \n");
    scanf("%f%f%f",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of a triangle = %0.2f\n",area);
    return 0;
}