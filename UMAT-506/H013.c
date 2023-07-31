/*
* Check whether alphabet is vowel orconsonent
* AUTHOR: Hursh Gupta
* DATED: 7-27-23
*/

#include <stdio.h>

int check(char al){
    // return 2 if uppercase, 1 if lowercase and 0 otherwise
    if ( al >= 65 && al <= 90 )
        return(2);
    else if (al >= 97 && al <= 122)
        return(1);
    else
        return(0);
}

void main(){
    char al;
    printf("Enter alphabet:\033[0;32m");
    scanf("%c", &al);

    switch(check(al)){
        case 2:
            al -= 32;       //convert to lowercase
        case 1:
            switch(al){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    printf("vowel");
                    break;
                default:
                    printf("consonent");
            }
            break;
        case 0:
            printf("\033[0;31mINVALID INPUT! Please enter an alphabet!");
    }
    printf("\n");

}