//7.	WAP that print the day depending upon number inputted by the user. (If input is 1 print Sunday and so on.)
//a.	Using if..else..if
//b.	Using Switch case
#include<stdio.h>

void ifElse(int num){
    if(num==1){
        printf("Sunday");
    }
    else if(num==2){
        printf("Monday");
    }
    else if(num==3){
        printf("Tuesday");
    }
    else if(num==4){
        printf("Wednesday");
    }
    else if(num==5){
        printf("Thursday");
    }
    else if(num==6){
        printf("Friday");
    }
    else if(num==7){
        printf("Saturday");
    }
    else{
        printf("Invalid input");
    }
}

void swit(int num){
    switch(num){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid input");
            break;
    }
}

int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    ifElse(num);
    printf("\n");
    swit(num);
    printf("\n");
    return 0;
}
