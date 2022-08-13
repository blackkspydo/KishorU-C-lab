/*
2.	WAP that reads the marks of a student in seven subjects. Then calculate the percentage and determine the division. Use these conditions:
a.	Percentage greater than or equal to 80 ->Distinction
b.	Percentage between 60 and 79 ->First Division
c.	Percentage between 45 and 59 ->Second Division
d.	Percentage between 32 and 44 ->Third Division
e.	Percentage less than or equal to 31 ->Fail
*/
#include<stdio.h>
int main(){
    int marks[7];
    int i;
    float per;
    for(i=0;i<7;i++){
        printf("enter marks of subject %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    per=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5]+marks[6])/7;
    if(per>=80){
        printf("distinction");
    }
    else if(per>=60 && per<80){
        printf("first division");
    }
    else if(per>=45 && per<60){
        printf("second division");
    }
    else if(per>=32 && per<45){
        printf("third division");
    }
    else{
        printf("fail");
    }
    printf("\n");
    return 0;
}