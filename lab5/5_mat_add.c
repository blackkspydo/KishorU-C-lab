//5. WAP to read two M*N matrices and display their sum/difference.
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
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}