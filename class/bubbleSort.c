#include <stdio.h>

void output(int size,int arr[size]){
	for (int i = 0; i < size; ++i)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void input(int s,int arr[s]){
	for (int i = 0; i < s; ++i)
	{
		printf("Enter value for %dth place",i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
}
int main()
{
	int size;
	printf("Enter size of the array: ");
	scanf("%d",&size);
	int arr[size];
	input(size,arr);
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-1-i; j++)
		{
			if(arr[j]>arr[j+1]){
				int temp = arr[j+1];
				arr[j+1]= arr[j];
				arr[j] = temp;
			}
		}
	}
	output(size,arr);

	return 0;
}