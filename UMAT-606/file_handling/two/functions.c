#include "main.h"
#include <stdio.h>

void compareFiles(FILE* f1, FILE* f2){

  int same = 1;
  char s1[80];
  char s2[80];
  char c1, c2;
  int pos = 0;
  while(!feof(f1) && !feof(f2)){
    c1 = fgetc(f1);
    c2 = fgetc(f2);
    if (c1!=c2){
      same = 0;
      break;
    }
  }
  if (same) printf("it's the same image sir!\n");
  else printf("no bro, it's not done!\n");
  
  
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
  *s = '\0'; // replace \n by \0

  
  fseek(f1, init, SEEK_SET);
}
