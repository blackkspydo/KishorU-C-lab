//Matrix multiplication
#include<stdio.h>
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
void transpose(int row, int col, int arr[row][col], int trans[col][row]) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      trans[j][i] = arr[i][j];
    }
  }
}



int main(){
    int r1,r2,c1,c2;
    printf("Enter row for matrix1: ");
    scanf("%d",&r1);
    printf("Enter col for matrix1: ");
    scanf("%d",&c1);
    int mat1[r1][c1];
    input(r1,c1,mat1);
    output(r1,c1,mat1);
     printf("Enter row for matrix 2: ");
    scanf("%d",&r2);
    printf("Enter col for matrix 2: ");
    scanf("%d",&c2);
    int mat2[r2][c2];
    input(r2,c2,mat2);
    output(r2,c2,mat2);
    if(!(c1==r1)){
        printf("Invalid dimensions");
        return 1;
    }
    int mul[r1][c2];
    int tmul[c2][r1];
    transpose(r1,c2,mul,tmul);
    for(int i = 0; i < r1;i++){
        for(int j=0;j<r2;j++){
            mul[i][j]= mat1[i][j]*tmul[i][j]+mat1[i][j+1]*tmul[i][j+1];
        }
    }
    printf("\n");
    output(r2,c2,mul);
return 0;    
}