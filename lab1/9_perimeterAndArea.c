//Write a program to find area and perimeter of a rectangle .
#include <stdio.h>
int main()
{
	float length, breadth, perimeter, area;
	printf("Enter length and breadth of a rectangle: \n");
	scanf("%f%f",&length,&breadth);
	perimeter = 2*(length+breadth);
	area = length*breadth;
	printf("Perimeter of the rectangle: %0.2f\n",perimeter);
	printf("Area of the rectangle: %0.2f\n",area);
	return 0;
}