/*
* PURPOSE: Checks whether a character is Uppercase / lowercase / digit / special character
* AUTHOR: Hursh Gupta
* DATED: 7-24-23
*/


#include <stdio.h>

void main(){
    char c;
    printf("Enter character: ");
    scanf( "%c" , &c );
    if((c >= 65) && (c <= 90) )
        printf("uppercase");
    else if ( c >= 97 && c <= 122 )
        printf("lowercase");
    else if ( c >= 48 && c <= 57 )
        printf("digit");
    else
        printf("special character");
    printf("\n");
}