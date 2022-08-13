// WAP to product two numbers and display numbers
#include <stdio.h>
int main(){
	int a,b,product;
	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);
	product = a * b;
	printf("%d * %d = %d \n",a,b,product);
	return 0;
}