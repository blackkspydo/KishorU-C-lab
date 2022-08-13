//WAP to add & subtract two complex numbers (x + i ∗ y)& (a + i ∗ b) using function.
#include<stdio.h>
struct complex{
    int real;
    int img;
};
struct complex add(struct complex c1,struct complex c2){
    struct complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;
}
struct complex sub(struct complex c1,struct complex c2){
    struct complex c3;
    c3.real=c1.real-c2.real;
    c3.img=c1.img-c2.img;
    return c3;
}
int main(){
    struct complex c1,c2,c3;
    printf("Enter the first complex number: ");
    scanf("%d %d",&c1.real,&c1.img);
    printf("Enter the second complex number: ");
    scanf("%d %d",&c2.real,&c2.img);
    c3=add(c1,c2);
    printf("Add: %d + i%d\n",c3.real,c3.img);
    c3=sub(c1,c2);
    printf("Sub: %d + i%d\n",c3.real,c3.img);
    return 0;
}
