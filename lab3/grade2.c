// 8.	WAP that asks the user to enter his/her marks of 5 subjects and print the corresponding grade.
// a.	100 – 80 = A
// b.	79 – 60 = B
// c.	59 – 50 = C
// d.	49 – 40 = D
// e.	< 40 = F
#include<stdio.h>
int main(){
    int marks[5];
    for(int i = 0; i < 5; i++){
        printf("Enter marks for subject %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i = 0; i < 5; i++){
        if(marks[i]>=80){
            printf("Subject %d is %d is A\n",i+1,marks[i]);
        }
        else if(marks[i]>=60){
            printf("Subject %d is %d is B\n",i+1,marks[i]);
        }
        else if(marks[i]>=50){
            printf("Subject %d is %d is C\n",i+1,marks[i]);
        }
        else if(marks[i]>=40){
            printf("Subject %d is %d is D\n",i+1,marks[i]);
        }
        else{
            printf("Subject %d is %d is F\n",i+1,marks[i]);
        }
    }
    printf("\n");
    return 0;
}