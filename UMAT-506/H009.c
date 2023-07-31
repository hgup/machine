/*
 * PURPOSE: Reverses a 5 digit # and checks whether it is palindrome or not
 * AUTHOR:  Hursh Gupta
 * DATE:    7-25-23
*/

#include <stdio.h>

void main(){
    int N;              // numbers to be checked
    int R = 0;          // it's reverse

    printf("Enter number: ");
    scanf("%d",&N);
    int S = N;          // a helping variable

    for( int i = 1; i <= 5; i++){
        R = S%10 + 10*R;
        S = S/10;
    }

    printf("It's reverse is %d. \n", R);
    if (N == R) printf("It is palindrome.\n");
    else printf("It is not palindrome.\n");

}