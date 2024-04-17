#include "myfile.h"

int main(int args, char** argv){
  // count_chars("input.txt");
  //

  if (args < 2){
    printf("Please provide a filename\n");
    return 0;
  }
  
  count_chars(argv[1]);
  // copy_file("input.txt","output.txt");

  
}
