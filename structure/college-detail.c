#include<stdio.h>

struct CollegeDetail{
    int CID;
    char name[40];
};

struct StudentDetail{
    int SID;
    char name[25];
    struct CollegeDetail college;
};
 
struct StudentDetail input(void);

void output(struct StudentDetail);

int main(){
    struct StudentDetail student_1;
    student_1 = input();
    printf("\n\nOutput");
    output(student_1);
    return 0;
}

struct StudentDetail input(void){
    struct StudentDetail student;
    printf("Student's ID: ");
    scanf("%d",&student.SID);
    getchar();
    printf("Student's name: ");
    scanf("%[^\n]s",student.name);
    printf("College's ID: ");
    scanf("%d",&student.college.CID);
    getchar();
    printf("College's name: ");
    scanf("%[^\n]s",student.college.name);  
    return student;
}

void output(struct StudentDetail student){
    printf("Student's ID: %d\nStudent's name: %s\nCollege's ID: %d\nCollege's name: %s\n",student.SID,student.name,student.college.CID,student.college.name);
}