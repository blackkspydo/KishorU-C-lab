//7. WAP to find the sum of squares in a diagonal of a square matrix.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter the %d %d element: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i][i]*arr[i][i];
    }
    printf("%d",sum);
    return 0;
}
