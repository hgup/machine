
#include "studentRecord.h"

#define FILENAME "studentdetails.txt"

int main(){
  
  FILE* fp = fopen(FILENAME, "a+b");

  if(fp){
    printf("Okay!");
  }

  fclose(fp);
}

