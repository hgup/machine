
#include "studentRecord.h"


void getName(char *name){
  fgets(name, MAX_NAME_SIZE, stdin);
  int len = strlen(name);
  // remove trailing newline
  if ((len > 0) && (name[len - 1] == '\n'))
    name[ len - 1] = '\0';
}

void insertRecord(FILE* fp){

  Student *student = malloc(sizeof(Student));

  fseek(fp,0,SEEK_END);

  printf("Enter RegdNo: ");
  scanf("%d", &student->regdNo);
  printf("\nEnter Name: ");
  getchar(); // to clear buffer
  scanf("%[^\n]", student->name);
  printf("Enter GPA:");
  scanf("%f", &student->gpa);
  printf("Enter Age:");
  scanf("%f", &student->age);

  fwrite(student,sizeof(Student),1,fp);

  printf("\nSuccessfully added new student!\n");
  
}

void displayRecords(FILE* fp){

  fseek(fp,0,SEEK_SET);
  Student *student = malloc(sizeof(Student));

  printf("\n========================\nALL STUDENT DETAILS\n========================\n");
  while(fread(student,sizeof(Student),1,fp)){
      printf("REGD: %d\n",student->regdNo);
      printf("\tName: %s\n",student->name);
      printf("\tAge:  %.0f\n",student->age);
      printf("\tGPA:  %.1f\n\n",student->gpa);
  }
  printf("\n========================\nEND\n========================\n");
}

void modifyRecord(FILE* fp, int RegdNo, float newGPA){

}

void deleteRecord(FILE *fp, float RegdNo){

}
