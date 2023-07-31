/*
* PURPOSE: Checks whether an year is leap or not
* AUTHOR: Hursh Gupta
* DATED: 7-26-23
*/

#include <stdio.h>

void main(){
    int y;                                  // our year
    printf("Enter Year: ");
    scanf("%d", &y);
    if(y % 400 == 0)                        // divisible by 400
        printf("Leap (super year)");
    else if (y % 4 == 0 && y % 100 != 0)    // divisible by 4 and not divisible by 100
        printf("Leap");
    else                                    // not divisible by 4 and 400 (if divisible by 100)
        printf("not");
    printf("\n");
}