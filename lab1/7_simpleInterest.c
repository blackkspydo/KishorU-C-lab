//7. WAP to calculate simple interest when principal, time and rate are provided by the user.
#include<stdio.h>
int main()
{
	int principal;
	float time, rate, SI;
	printf("Enter Principal amount, Time in year and rate in percentage: \n");
	scanf("%d%f%f",&principal,&time,&rate);
	SI = (principal*time*rate)/100;
	printf("Interest amount = Rs.%0.2f\n",SI);
	return 0;
}