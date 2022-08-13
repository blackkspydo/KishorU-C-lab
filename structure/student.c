#include <stdio.h>

struct Students{
    int roll;
    char name[25];
    int grade;
    char gender;
    int age;
};

struct Students input();
void output(struct Students);
void outputByGender(char,int,struct Students[] );
void inputArr(int,struct Students[]);
void menu(int,struct Students[]);

int main(){
    struct Students std[3];
    inputArr(3,std);
    menu(3,std);
    return 0;
}

void menu(int size,struct Students student[size]){
    int opt;
    printf("Welcome TO Texas\n");
    printf("Select your option:\n");
    printf("1. View boys students:\n");
    printf("2. View girls students:\n");
    scanf("%d",&opt);
    switch(opt){
        case 1:
        outputByGender('m',3,student);
        break;
        case 2:
        outputByGender('f',3,student);
        break;
        default:
        printf("Invalid Input");
        menu(size,student);
    }
}

struct Students input(){
    struct Students student;
    printf("Enter roll: ");
    scanf("%d",&student.roll);
    getchar();
    printf("Enter name: ");
    scanf("%[^\n]s",student.name);
    printf("Enter grade: ");
    scanf("%d",&student.grade);
    getchar();
    printf("Enter gender: ");
    scanf("%c",&student.gender);
    printf("Enter age: ");
    scanf("%d",&student.age);
    return student;
}

void output(struct Students student){
    printf("Roll: %d\n",student.roll);
    printf("Name: %s\n",student.name);
    printf("Grade: %d\n",student.roll);
    printf("Gender: %s\n",student.gender=='m'?"Male":"Female");
    printf("Age: %d\n",student.roll);   
}

void inputArr(int size, struct Students student[size]){
    for(int i= 0;i<size ;i++){
        printf("Student %d: \n",i);
        student[i]=input();
    }
}

void outputArr(int size, struct Students student[size]){
    for(int i= 0;i<size ;i++){
        output(student[i]);
    }
}

void outputByGender(char gender,int size,struct Students students[size] ){
        for(int i=0; i<size;i++){
    if(gender==students[i].gender){
        output(students[i]);
    }
    }
}