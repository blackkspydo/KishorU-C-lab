// passing arr to a func
#include<stdio.h>


struct Nums{
    int num1;
    int num2;
};

void input(int ,struct Nums[]);
void output(int,struct Nums[]);

int main(){
    struct Nums numArr[3];
    input(3,numArr);
    printf("\n\n");
    output(3,numArr);
}

void input(int size,struct Nums arr[size]){
    for(int i = 0 ; i<size;i++){
        printf("enter num1: ");
        scanf("%d",&arr[i].num1);
        printf("enter num2: ");
        scanf("%d",&arr[i].num2);
    }
}

void output(int size, struct Nums arr[size]){
    for(int i = 0 ; i<size;i++){
        printf("num1: %d\n",arr[i].num1);
        printf("num2: %d\n",arr[i].num2);
    }
}