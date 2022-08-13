//WAP using function to circularly shift their values given three variables x, y, and z. In other words, if x = 5,y = 9,andz = 8; after circular shift the result needs to be y = 5, z = 9, and x = 8. Call the function with variables a, b, and c to circularly shift their values.
#include<stdio.h>
void shift(int *x,int *y,int *z){
    int temp=*x;
    *x=*y;
    *y=*z;
    *z=temp;
}
int main(){
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d %d %d",&a,&b,&c);
    shift(&a,&b,&c);
    printf("a=%d b=%d c=%d",a,b,c);
    return 0;
}

