#include <stdio.h>

void input(int r, int c,int arr[r][c]){
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			printf("Enter value for %dx%d: ",i,j);;
			scanf("%d",&arr[i][j]);
		}
	}
}

void output(int r, int c,int arr[r][c]){
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			printf("%d ",arr[i][j]);;
			
		}
		printf("\n");
	}
}

int main (){
	int r1,r2,c1,c2;
	printf("Enter num of rows for mat1: ");
	scanf("%d",&r1);
	printf("Enter num of cols for mat1: ");
	scanf("%d",&c1);
	int mat1[r1][c1];
	input(r1,c1,mat1);
	output(r1,c1,mat1);
	printf("Enter num of rows for mat2: ");
	scanf("%d",&r2);
	printf("Enter num of cols for mat2: ");
	scanf("%d",&c2);
	int mat2[r2][c2];
	input(r2,c2,mat2);
	output(r2,c2,mat2);
	if(!(r1==r2&&c1==c2)){
		printf("\nError: Dimensions should be same: %dx%d and %dx%d",r1,c1,r2,c2);
		return 1;
	}
	int sum[r1][r2];
	for (int i = 0; i < r1; ++i)
	{
		for(int j=0;j<c1;++j){
			sum[i][j]= mat1[i][j]+mat2[i][j];
		}
	}
	printf("Sum is\n");
	output(r1,c2,sum);
	return 0;
}