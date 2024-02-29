
#include "studentRecord.h"
#include <errno.h>

#define FILENAME "studentdetails"
#define NUM_OF_STUDENTS 100

// int main(){
//   
//   FILE* fp = fopen(FILENAME, "a+b");
//
//   if(fp){
//     printf("Okay!\n");
//   }
//
//   fclose(fp);
// }
//


// Experiment
int main(){
  
  FILE* fp = fopen(FILENAME, "a+b");
  Student *student;
  student = malloc(sizeof(Student));

  if(!fp){
    return EROFS;
  }

  // strcpy(student->name,"Hursh Gupta");
  // student->regdNo = 211219;
  // student->gpa = 8.1;
  // student->age = 21;
  // fwrite(student,sizeof(Student),1,fp);
  //
  // strcpy(student->name,"Siba Charan");
  // student->regdNo = 211214;
  // student->gpa = 8.8;
  // student->age = 22;
  // fwrite(student,sizeof(Student),1,fp);



  while(fread(student,sizeof(Student),1,fp)){
    if(student->regdNo == 211219){
      printf("%s\n",student->name);
      printf("%f\n",student->age);
      printf("%f\n",student->gpa);
    }
  }

  printf("done!\n");
  fclose(fp);
  return 0;
}

