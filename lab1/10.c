//10.	WAP to read height and base of a triangle and find area of it.
#include<stdio.h>
int main()
{
    float height, base, area;
    printf("Enter height and base of a triangle: \n");
    scanf("%f%f",&height,&base);
    area = (height*base)/2;
    printf("Area of a triangle = %0.2f\n",area);
    return 0;
}