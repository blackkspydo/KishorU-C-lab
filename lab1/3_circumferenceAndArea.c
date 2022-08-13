//Write a program to find area and circumference of circle.
#include <stdio.h>
#include <math.h>

int main(){
	const float PI =  3.1415;
	float radius, area, circumference;
	printf("Enter radius of the circle (atleast 2 digits): \n");
	scanf("%f",&radius);
	circumference = 2* PI * radius;
	area = PI * pow(radius,2);
	printf("\nCircumference of the circle is: %0.2f\n",circumference);
	printf("Area of the circle is: %0.2f\n\n",area);
	return 0;
}