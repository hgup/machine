
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
  Student *students[NUM_OF_STUDENTS]; // array of pointers

  students[0] = malloc(sizeof(Student));
  strcpy(students[0]->name,"Hursh Gupta");
  students[0]->regdNo = 211219;
  students[0]->gpa = 8.1;
  students[0]->age = 21;

  if(!fp){
    return EROFS;
  }

  // fwrite(students[0],sizeof(Student),1,fp);
  // fwrite(&s,sizeof(Student),1,fp);
  //
  // fsetpos(fp,SEEK_SET);

  Student *s = students[0];
  while(fread(s,sizeof(Student),1,fp)){
    if(s->regdNo == 211219){
      printf("%s\n",s->name);
      printf("%f\n",s->age);
      printf("%f\n",s->gpa);
    }
  }

  fclose(fp);
  return 0;
}

