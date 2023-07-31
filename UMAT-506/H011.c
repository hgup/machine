/*
* Prints the name of the day of the week when the week index is given
* 0 is Sunday (0 - 6) weekdays
* AUTHOR: Hursh Gupta
* DATE 7-27-23
*/

#include <stdio.h>

void main(){
    int ch;
    printf("Enter index (0 - 6): ");
    scanf("%d", &ch);
    printf("\033[0;32m");
    switch(ch){
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("saturday");
            break;
        default:
            printf("\033[0;31mInvalid entry"); // thanks Siba
    }
    printf("\n");
}