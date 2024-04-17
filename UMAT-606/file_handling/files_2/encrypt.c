#include "main.h"
#include <errno.h>   // for errno
#include <limits.h>  // for INT_MAX, INT_MIN
#include <stdlib.h>  // for strtol

int main(int args, char** argv){
  char *p;

  if (args < 3){
    printf("USAGE\n\tencrypt <filename> <key>");
    return 0;
  }
  long key = strtol(argv[2], &p, 10);
    if (errno != 0 || *p != '\0' || key > INT_MAX || key < INT_MIN) {
      // Put here the handling of the error, like exiting the program with
      // an error message
    printf("ERROR!\n");
    return -1;
      } else {
    encrypt(argv[1], key );
  }

  
}
