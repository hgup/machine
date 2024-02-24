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
