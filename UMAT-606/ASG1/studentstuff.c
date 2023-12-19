#include <stdio.h>
#include "dateTypes.h"


typedef int year;
typedef struct stu{
    int regd;
    float cgpa;
    char grade, name[40], gender;
    date DOB;
    year YOJ;
    struct stu *s;
} student;

void enterStudent(int index, student *stu){
  printf("[%2d]\n",index);
  printf("Name\t\t:");
  scanf("%s", stu->name);
  printf("CGPA\t\t:");
  scanf("%f", &stu->cgpa);
  printf("Grade\t\t:");
  scanf("%c", &stu->grade);
  printf("Gender\t\t:");
  scanf("%c", &stu->gender);
  printf("Date of Birth\t:");
  stu->DOB = inputDate();
  printf("Enter Year of Joining\t:");
  scanf("%d", &stu->YOJ);
}

void printStudent(student stu){
  printf("[%s\t : %10d;\n CGPA %.1f; GRADE: %c;\n DOB: %d/%d/%d - YOJ: %d]",
         stu.name, stu.regd, stu.cgpa, stu.grade, stu.DOB.year, stu.DOB.month, stu.DOB.day, stu.YOJ);
}

int main(){
  student a;
  enterStudent(1, a.s);
  printStudent(a);
}
