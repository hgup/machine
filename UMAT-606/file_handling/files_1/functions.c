#include "myfile.h"
#include <stdio.h>
#include <string.h>

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
  printf("copied successfully!\n");

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

void merge_files(char* file1, char*  file2, char* output){

  FILE *fp1 = fopen(file1, "r");
  FILE *fp2 = fopen(file2, "r");

  FILE *fpo = fopen(output, "w");
  char x;

  while((x=getc(fp1))!=EOF){
    fputc(x,fpo);
  }

  fputc('\n',fpo);

  while((x=getc(fp2))!=EOF){
    fputc(x,fpo);
  }

  fclose(fp1);
  fclose(fp2);
  fclose(fpo);

}


void delete_line(char *filename, int n){


  char *tempfilename = "temp";
  FILE *fp = fopen(filename, "r");
  FILE *ftemp = fopen(tempfilename, "w");
  char x;
  int linenum = 1;
   
  x = fgetc(fp);
  while(!feof(fp)){
    if (linenum != n) fputc(x,ftemp);
    x = fgetc(fp);
    if (x == '\n')linenum++;
  }

  fclose(fp);
  fclose(ftemp);

  remove(filename);
  rename(tempfilename,filename);

}
