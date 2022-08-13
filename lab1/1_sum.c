// WAP to add two numbers and display numbers
#include <stdio.h>
int main(){
	int a,b,sum;
	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);
	sum = a + b;
	printf("%d + %d = %d \n",a,b,sum);
	return 0;
}