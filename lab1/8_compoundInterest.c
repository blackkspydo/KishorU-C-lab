//8.WAP to find compound interest for given principal amount, time, year and rate.
#include<stdio.h>
#include<math.h>
int main()
{
    int principal;
    float time, rate, CI;
    printf("Enter Principal amount, Time in year and rate in percentage: \n");
    scanf("%d%f%f",&principal,&time,&rate);
    CI = (principal*pow(1+rate/100,time))-principal;
    printf("Interest amount = Rs.%0.2f\n",CI);
    return 0;
}