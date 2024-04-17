#include "myfile.h"

int main(int args, char** argv){
  // count_chars("input.txt");
  //

  if (args < 4){
    printf("Usage merge <file1> <file2> <output>\n");
    return 0;
  }
  
  merge_files(argv[1], argv[2], argv[3]);

  
}
