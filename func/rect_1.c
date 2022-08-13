#include<stdio.h>

void area_1(void);
float area_2(void);
float area_3(float,float);

int main(){
    printf("\nwithout args and no return value\n");
    area_1();
    printf("\nwithout args and no return value\n");
    printf("\narea of rectangle %.2f\n",area_2());
    printf("\nwith args and  return value\n");
    printf("\narea of rectangle %.2f\n",area_3(6.6,9));
    return 0;
}

void area_1(){
    float l,b;
    printf("Enter length of rectangle");
    scanf("%f",&l);
    printf("Enter breadth of rectangle");
    scanf("%f",&b);
    printf("Area = %.2f",l*b);
}

float area_2(){
   float l,b;
    printf("Enter length of rectangle");
    scanf("%f",&l);
    printf("Enter breadth of rectangle");
    scanf("%f",&b);
    return l*b;
}

float area_3(float l, float b){
    return l*b;
}
