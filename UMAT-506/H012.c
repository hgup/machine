/*
* Prints # of days of the month
* AUTHOR: Hursh Gupta
* DATED: 7-27-23
*/

#include <stdio.h>

int isleap(int year) {
    if (year % 400 == 0) // leap
        return(1);
    else if (year % 4 == 0 && year % 100 !=0 ) // leap
        return(1); 
    else
        return (0);      // not leap
}

void main(){
    int month;
    int year;

    printf("Enter month index (1-12): ");
    scanf("%d", &month );
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("31 days"); break;
        case 4:
        case 6:
        case 9:
        case 11: printf("30 days");
        case 2: 
            printf("Enter Year: ");
            scanf("%d" , &year );
            if(isleap(year)) 
                printf("29 days");
            else
                printf("28 days");
            break;
        
        default:
            printf("\033[0;31mINVALID ENTRY!");
    }
    printf("\n");
}

// variable type should be mentioned inside the function