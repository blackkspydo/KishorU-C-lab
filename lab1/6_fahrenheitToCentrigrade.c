//Write a program to convert a temperature given in Fahrenheit to celsius
#include<stdio.h>
int main(){
	float celsius, fahrenheit;
	printf("Enter desired measure of Fahrenheit scale : ");
	scanf("%f",&fahrenheit);
	celsius= (fahrenheit - 32)/1.8;
	printf("%0.2f degree Fahrenheit = %0.2f degree Celsius \n",fahrenheit,celsius);
	return 0;
}