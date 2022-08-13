#include<stdio.h>
#include<math.h>
int main()
{
    float math,science,english,nepali,social,EPH,OPTmath,sum,percentage;
    printf("Enter the marks in maths:");
    scanf("%f",&math);
    printf("Enter the marks in science:");
    scanf("%f",&science);
    printf("Enter the marks in english:");
    scanf("%f",&english);
    printf("Enter the marks in nepali:");
    scanf("%f",&nepali);
    printf("Enter the marks in Social:");
    scanf("%f",&social);
    printf("Enter the marks in EPH:");
    scanf("%f",&EPH);
    printf("Enter the marks in OPTmaths:");
    scanf("%f",&OPTmath);
    sum = math + science + english + nepali + social + EPH + OPTmath;
    percentage=(sum/700)*100;
    printf("You got %.2f percentage \n",percentage);
    if(percentage>=80)
    printf("Congratulation,you got distinction.");
     else if(percentage>=60)
     printf("Congratulation,you got first division.");
       else if(percentage>=45)
       printf("Congratulation,you got second division.");
        else if(percentage>=32)
        printf("Congratulation,you got third division.");
        else if(percentage<32)
        printf("Sorry!, you are fail.");
        return 0;
}