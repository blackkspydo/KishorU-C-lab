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
    if((c1!=r2)){
        printf("Invalid dimensions/n");
        return 1;
    }
    int mat2[r2][c2];
    input(r2,c2,mat2);
    output(r2,c2,mat2);   
    int mul[r1][c2];
    for(int i = 0; i < r1;i++){
        for(int j=0;j<c2;j++){
            int sum =0 ;
            for(int k = 0;k<c2;k++){
                sum += mat1[i][k]*mat2[k][j] ;
            }
        mul[i][j]= sum;
        }
    }
    printf("\n");
    printf("Mat1xMat2: \n");
    output(r2,c2,mul);
return 0;    
}
