//Write a program to convert a temperature given in Celsius to Fahrenheit 
#include<stdio.h>
int main(){
	float celsius, fahrenheit;
	printf("Enter desired measure of Celsius scale : ");
	scanf("%f",&celsius);
	fahrenheit = (celsius *1.8) +32;
	printf("%0.2f degree Celsius = %0.2f degree Fahrenheit\n",celsius,fahrenheit);
    return 0;
}