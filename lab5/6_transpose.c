//6. WAP to find transpose of a matrix.
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number of rows x cols: ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter the %d %d element: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int arr2[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr2[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}