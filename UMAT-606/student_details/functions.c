
#include "studentRecord.h"
#include <stdio.h>


void getName(char *name){
  fgets(name, MAX_NAME_SIZE, stdin);
  int len = strlen(name);
  // remove trailing newline
  if ((len > 0) && (name[len - 1] == '\n'))
    name[ len - 1] = '\0';
}

int insertRecord(FILE* fp){

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

  return 1;
  
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

void modifyRecord(FILE** fpp, int RegdNo, float newGPA, char* message){

  FILE *fp = *fpp;
  fseek(fp,0,SEEK_SET);
  Student *student = malloc(sizeof(Student));
  int found = 0;
  float oldGPA;

  // Search
  while(!found && fread(student,sizeof(Student),1,fp)){
    if(student->regdNo==RegdNo){
      // found!
      found = 1;

      long read = ftell(fp) - sizeof(Student); // [a, b] - {b} = [a, b)
      printf("read %ld\n", read);
      fseek(fp,0,SEEK_END);
      long filesize = ftell(fp); // [a,c]
      printf("filesize %ld\n", filesize);
      long remaining = filesize - read - sizeof(Student); // (b, c] not {b}
      printf("remaining %ld\n", remaining);

      char *temp1 = malloc(read);
      char *temp2 = malloc(remaining); 

      fseek(fp,0,SEEK_SET);
      fread(temp1, read, 1, fp);          // read [a, b)
      fseek(fp,sizeof(Student),SEEK_CUR); // skip {b}
      fread(temp2, remaining, 1, fp);     // read (b, c]
      // printf("read the required data, file pointer at the end: %ld \n",ftell(fp));
      
      // close old pointer
      fclose(fp);
      remove(FILENAME);

      // create new file
      fclose(fopen(FILENAME, "w+b"));
      // printf("created new file %s\n",FILENAME);

      fp = fopen(FILENAME, "a+b");
      // printf("opened file in a+b mode %p\n", fp);
      // printf("wrote %ld times to file from 'read'\n",
      fwrite(temp1, read, 1, fp);//);
      fwrite(student,sizeof(Student),1,fp);
      // printf("wrote %ld times to file from 'remaining'\n",
      fwrite(temp2, remaining, 1, fp);//);
      sprintf(message,"REGD: %d, update GPA: %.1f -> %.1f",student->regdNo, oldGPA, student->gpa);
    }
  }
  if(!found){
    sprintf(message,"Student not found!");
  }
}

void deleteRecord(FILE **fpp, int RegdNo, char* message){

  FILE *fp = *fpp;
  fseek(fp,0,SEEK_SET);
  Student *student = malloc(sizeof(Student));
  int found = 0;

  // Search
  while(!found && fread(student,sizeof(Student),1,fp)){
    if(student->regdNo==RegdNo){
      // found {b}, the record
      found = 1;

      // store the contents in temp
            
      long read = ftell(fp) - sizeof(Student); // [a, b] - {b} = [a, b)
      printf("read %ld\n", read);
      fseek(fp,0,SEEK_END);
      long filesize = ftell(fp); // [a,c]
      printf("filesize %ld\n", filesize);
      long remaining = filesize - read - sizeof(Student); // (b, c] not {b}
      printf("remaining %ld\n", remaining);

      char *temp1 = malloc(read);
      char *temp2 = malloc(remaining); 

      fseek(fp,0,SEEK_SET);
      fread(temp1, read, 1, fp);          // read [a, b)
      fseek(fp,sizeof(Student),SEEK_CUR); // skip {b}
      fread(temp2, remaining, 1, fp);     // read (b, c]
      // printf("read the required data, file pointer at the end: %ld \n",ftell(fp));
      
      // close old pointer
      fclose(fp);
      remove(FILENAME);

      // create new file
      fclose(fopen(FILENAME, "w+b"));
      // printf("created new file %s\n",FILENAME);

      fp = fopen(FILENAME, "r+b");
      // printf("opened file in r+b mode %p\n", fp);
      // printf("wrote %ld times to file from 'read'\n",
      fwrite(temp1, read, 1, fp);//);
      // printf("wrote %ld times to file from 'remaining'\n",
      fwrite(temp2, remaining, 1, fp);//);

      *fpp = fp;                                  // replace the original pointer in the mian program
      sprintf(message,"Successfully deleted REGD:%d",student->regdNo);
    }
  }
  if(!found){
    sprintf(message,"DELETION FAILED: Student not found");
  } else {
    sprintf(message,"Successfully deleted REGD:%d",student->regdNo);
  }

}
