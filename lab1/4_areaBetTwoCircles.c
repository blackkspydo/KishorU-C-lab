//WAP to calculate area between two circles having radius r1 and r2. 
#include <stdio.h>
#include <math.h>

int main(){
	const float PI =  3.1415;
	float r1,r2,area;
	printf("Enter radius of the circle two circles: \n");
	scanf("%f%f",&r1,&r2);
	area = r1>r2 ? (PI * pow(r1,2)) - (PI * pow(r2,2)): (PI * pow(r2,2)) -( PI * pow(r1,2));
	printf("Area between two circles is: %0.2f\n\n",area);
	return 0;
}