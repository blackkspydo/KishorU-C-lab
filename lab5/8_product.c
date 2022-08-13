//8. WAP to compute the product of two matrices if possible.
#include<stdio.h>

void input(int m,int n,int arr[m][n]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the %d %d element: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}

int main(){
    int m,n;
    printf("Enter the number of rows x cols: ");
    scanf("%d %d",&m,&n);
    int arr1[m][n];
    int arr2[m][n];
    input(m,n,arr1);
    input(m,n,arr2);
    int arr3[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr3[i][j]=0;
            for(int k=0;k<n;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
