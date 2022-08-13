// Wap to and two user defined matrix if possible
#include <stdio.h>

int main() {
	int r1,r2,c1,c2;
	
	printf("Enter num of rows for mat1");
	scanf("%d",&r1);
	printf("Enter num of cols for mat1");
	scanf("%d",&c1);
	int mat1[r1][c1];

	for (int i = 0; i < r1; ++i)
	{
		for (int j = 0; j < c1; ++j)
		{
			printf("Enter value for %dc%d ",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}

	for (int i = 0; i < r1; ++i)
	{
		for (int j = 0; j < c1; ++j)
		{
			printf("%d  ",mat1[i][j]);
			
		}
		printf("\n");
	}
	printf("Enter num of rows for mat2 ");
	scanf("%d",&r2);
	printf("Enter num of cols for mat2");
	scanf("%d",&c2);
	int mat2[r2][c2];

	for (int i = 0; i < r2; ++i)
	{
		for (int j = 0; j < c2; ++j)
		{
			printf("Enter value for %dc%d ",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}

	

	if(!(r1==r2&&c1==c2)){
		printf("\nNumber of rows and cols should be same");
		return 1;
	}

	int sum[r1][c1];

	for (int i = 0; i < r1; ++i)
	{
		for (int j = 0; j < c1; ++j)
		{
			sum[i][j]= mat1[i][j]+mat2[i][j];
		}
		
	}
	for (int i = 0; i < r2; ++i)
	{
		for (int j = 0; j < c2; ++j)
		{
			printf("%d  ",sum[i][j]);
			
		}
		printf("\n");
	}

	return 0;
}

