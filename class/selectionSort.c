//selection sort
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
	for (int i = 0; i < size; i++)
	{
		int min = i;
		for (int j = i+1; j < size; j++)
		{
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		int temp = arr[i];
		arr[i]= arr[min];
		arr[min] = temp;
	}
	
	output(size,arr);


	return 0;
}