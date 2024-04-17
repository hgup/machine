#include "main.h"

int main(int args, char** argv){
  // count_chars("input.txt");
  //

  if (args < 2){
    printf("Usage:\n\t initcase <filename>\n");
    return 0;
  }
  
  initcase(argv[1]);

  
}
