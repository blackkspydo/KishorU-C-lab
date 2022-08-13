#include<stdio.h>
int fact(int);
int main(){
    int num;
    printf("Enter any num: ");
    scanf("%d",&num);
    printf("Fact of %d = %d\n",num,fact(num));
    return 0;
}

int fact(int num){
    int f;
    if(num==0){
        return 1; 
    }
    if(num >0){
        f= num* fact(num-1);
    }
    return f;
}
