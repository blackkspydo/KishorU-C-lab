// 12.	WAP to read annual salary of an employee and declare the tax; print the actual amount received by the employee.
// a.	Upto 100000 = 0%
// b.	Upto 150000 = 15%
// c.	Above 150000 = 25%
#include<stdio.h>
int main(){
    double salary;
    float tax;
    printf("Enter your Salary: ");
    scanf("%lf",&salary);
    if(salary<=100000){
        tax = 0;
    }
    else if(salary<=150000){
        tax = (salary-100000)*0.15;
    }
    else{
        tax = (50000)*0.15+(salary-150000)*0.25;
    }
    printf("Your tax is %0.2f\n",tax);
    printf("Your salary is %0.2lf\n",salary-tax);
    return 0;
}
