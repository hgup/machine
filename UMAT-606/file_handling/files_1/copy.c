#include "myfile.h"

int main(int args, char** argv){
  // count_chars("input.txt");
  //

  if (args < 3){
    if (args == 2) printf("Please provide a <destination> filename too\n");
    else printf("Please provide a <source> and <destination>\n");
    return 0;
  }
  
  copy_file(argv[1],argv[2]);

  
}
