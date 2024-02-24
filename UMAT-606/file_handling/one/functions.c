#include "myfile.h"
#include <stdio.h>

void tabulate_chars(char *filename){
  FILE *fp; 
  int charCount[255];
  for(int i = 0; i < 255; i++) charCount[i] = 0;
  fp = fopen(filename, "r");
  char x = fgetc(fp);
  while(x != -1){
    charCount[x] += 1;
    x =fgetc(fp);
  }
  for(int i = 0; i < 255; i++){
    if (charCount[i])
      printf("\"%c\"\t:\t%d\n",(char)i,charCount[i]);
  }
  fclose(fp);
}

void count_chars(char *filename){
  FILE *fp; 
  int chars = 0, tabs = 0, newlines = 0;
  fp = fopen(filename, "r");
  char x = fgetc(fp);
  while(x != -1){
    if(x == '\n')
      newlines++;
    else if(x == '\t')
      tabs++;
    else chars++;
    x =fgetc(fp);
  }
  printf("For file: \"%s\" \n\
  # of characters:\t%d\n\
  # of tabs:\t\t%d\n\
  # of newlines:\t%d\n", filename, chars, tabs, newlines);
  fclose(fp);
}

void print_file(char *filename){
  FILE *fp; 
  fp = fopen(filename, "r");
  char x = fgetc(fp);
  while(x != -1){
    printf("%c",x);
    x =fgetc(fp);
  }
  fclose(fp);
}

void copy_file(char *src, char*dest){
  FILE *fsrc = fopen(src,"r");
  FILE *fdest = fopen(dest,"w");

  char x = fgetc(fsrc);
  while(x != -1){
    fputc(x,fdest);
    x =fgetc(fsrc);
  }
  fclose(fsrc);
  fclose(fdest);

}
