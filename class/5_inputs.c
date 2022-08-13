// WAP to take 5 inputs as marks from user and display average.
#include <stdio.h>
int main() {
	float marks[5];
	float sum=0;
	for (int i = 0; i < 5; i++)
	{
		printf("Enter marks for subjects [%d]: ",i+1);
		scanf("%f",&marks[i]);
	}
	printf("Your marks are:\n");
	for (int i = 0; i <= 5; i++)
	{
		printf("%0.2f ",marks[i]);
		sum+=marks[i];
	}
	printf("\nAverage marks: %0.2f",sum/5);
	return 0;
}
