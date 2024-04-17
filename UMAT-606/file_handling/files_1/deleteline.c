#include "myfile.h"
#include <errno.h>   // for errno
#include <limits.h>  // for INT_MAX, INT_MIN
#include <stdlib.h>  // for strtol

int main(int args, char** argv){
  char *p;

  if (args < 2){
    printf("Please provide a <filename> and a line <number>\n");
    return 0;
  }
  long linenum = strtol(argv[2], &p, 10);
    if (errno != 0 || *p != '\0' || linenum > INT_MAX || linenum < INT_MIN) {
      // Put here the handling of the error, like exiting the program with
      // an error message
    printf("ERROR!\n");
    return -1;
      } else {
    delete_line(argv[1], linenum );
  }

  
}
