#include "main.h"

int main(int args, char*argv[]){

  FILE *f1 = fopen(argv[1],"r");
  FILE *f2 = fopen(argv[2],"r");
  compareFiles(f1, f2);
  
}

// TESTING ARGUMENTS

// int main(int args, char* argv[]){
//   while(args)
//     printf("%s\n", argv[--args]);
// }
