#include "main.h"
#include <stdio.h>
#include "string.h"

void compareFiles(char* file1, char* file2){

  FILE *f1 = fopen(file1,"r");
  FILE *f2 = fopen(file2,"r");
  // tasks
  // TODO check whether they are same or not

  int same = 1;
  char s1[80]; // the diff line from file 1 will be put into this
  char s2[80]; // the diff line from file 2 will be put into this (why did I type this full!??)
  char c1, c2;
  int line = 1;
  int pos1 = 0, pos2 = 0;
  while(!feof(f1) && !feof(f2)){
    c1 = fgetc(f1);
    c2 = fgetc(f2);
    if (c1!=c2){
      same = 0;
      break;
    }
    // if you encounter a new line, set the pointer to one+current;
    if (c1 == '\n'){
      line += 1;
      pos1 = ftell(f1) ;
      pos2 = ftell(f2) ;
    }
  }
  if (same) printf("it's the same image sir!\n");
  else {
    readline(s1,f1,pos1);
    readline(s2,f2,pos2);
    printf("Found differences in line %d\n\nIn file `%s`:\n\t\"%s\"\nIn file `%s`:\n\t\"%s\"\n",line,file1,s1,file2,s2);
  }
  
}

void readline(char* s, FILE* f1, int pos){
  int init = ftell(f1);

  fseek(f1, pos, SEEK_SET);

  char in;
  do {
    in = fgetc(f1);
    *(s++) = in;
  }
  while(in != '\n');
  *(--s) = '\0'; // replace \n by \0

  
  fseek(f1, init, SEEK_SET);
}


void initcase(char *filename){


  FILE *fp = fopen(filename, "r+");
  char x;
   
  // Handle first letter of the file
  fseek(fp,-1,SEEK_END);

  while(ftell(fp) != 0) {

    x = fgetc(fp);

    if (x == ' ' || x == '\n'){ // if you find a space or a newline
      x = fgetc(fp); // contains the right character to be UPPERCASED
      if((x <= 122) && (x >= 97)){
        fseek(fp,-1,SEEK_CUR);
        fputc(x-32 ,fp);
      } 
      fseek(fp,-1,SEEK_CUR);
    }
    fseek(fp,-2,SEEK_CUR);
    // 12 34

  }
  x = fgetc(fp);
  if((x <= 122) && (x >= 97)){
    fseek(fp,-1,SEEK_CUR);
    fputc(x-32 ,fp);
  } 
  fclose(fp);

}

void encrypt(char *filename, int key){

  FILE *fp = fopen(filename, "r+");
  FILE *ftmp = fopen("temp", "w");
  int x;
  while((x = fgetc(fp))!= EOF)
    fputc(x+key,ftmp);

  fclose(fp);
  strcat(filename,"~");
  rename("temp",filename);
}


void decrypt(char *filename, int key){

  FILE *fp = fopen(filename, "r");
  int x;
  while((x = fgetc(fp))!= EOF)
    printf("%c",x-key);

  fclose(fp);
}

