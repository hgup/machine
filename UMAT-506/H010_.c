/*
* Size of Various datatypes
* AUTHOR: Hursh Gupta
* DATED: 7-25-23
*/

#include <stdio.h>

void main(){
    int size;
    printf("==============DATATYPES=============\n\n");
    printf("Name\t\t\tSize\t\tRange\n");
    printf("------------------------------------\n");
    size = (int) sizeof(short int);
    printf("short int\t\t\t %d \t\t %lf"); //to be continued...
    // signed int
    // unsigned int
    // long int
    // char
    // float
    // double
    // long double

}

// NOTE: size of returns a long unsigned int

// warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
//    19 |     printf("long double: \t %d", sizeof(long double));
//       |                             ~^   ~~~~~~~~~~~~~~~~~~~
//       |                              |   |
//       |                              int long unsigned int
//       |                             %ld