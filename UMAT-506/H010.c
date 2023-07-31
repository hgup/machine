/*
* Size of Various datatypes
* AUTHOR: Hursh Gupta
* DATED: 7-25-23
*/

#include <stdio.h>

void main(){
    printf("DATATYPES:\n");
    printf("=========================\n");
    printf("short int: \t %lu\n", sizeof(short int));
    printf("signed int: \t %lu\n", sizeof(signed int));
    printf("unsigned int: \t %lu\n", sizeof(unsigned int));
    printf("long int: \t %lu\n", sizeof(long int));
    printf("char: \t\t %lu\n", sizeof(char));
    printf("float: \t\t %lu\n", sizeof(float));
    printf("double: \t %lu\n", sizeof(double));
    printf("long double: \t %lu\n", sizeof(long double));

}

// NOTE: size of returns a long unsigned int

// warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
//    19 |     printf("long double: \t %d", sizeof(long double));
//       |                             ~^   ~~~~~~~~~~~~~~~~~~~
//       |                              |   |
//       |                              int long unsigned int
//       |                             %ld