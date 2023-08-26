/* AUM SRI SAI RAM
 *
 * displays the number of days in a month of 2023
 * Date: 8-07-23 (M)
 * Regd: 211219
 */


#include <stdio.h>

void main(){
	char month; 			// switch variable

	// prompt
	printf(" A: January\n B: February\n C: March\n D: April\n E: May\n F: June\n G: July\n H: August\n I: September\n J: October\n K: November\n L: December\n");
	
	printf("Enter month as (A,B,C...): ");
	scanf("%c",&month);

	if ('a' <= month && month <= 'b')
	{	
		month-= 32; //capitalize if user enters small
		printf("\033[0;33mWarning: Required Capital Alphabet, ignoring case\n");
	}
	printf("\033[0;32m");

	
	switch(month){
		case 'A':
			printf("January, 2023 has 5 number of Sundays");
			break;
		case 'B':
			printf("February, 2023 has 4 number of Sundays");
			break;
		case 'C':
			printf("March, 2023 has 4 number of Sundays");
			break;
		case 'D':
			printf("April, 2023 has 5 number of Sundays");
			break;
		case 'E':
			printf("May, 2023 has 4 number of Sundays");
			break;
		case 'F':
			printf("June, 2023 has 4 number of Sundays");
			break;
		case 'G':
			printf("July, 2023 has 5 number of Sundays");
			break;
		case 'H':
			printf("August, 2023 has 4 number of Sundays");
			break;
		case 'I':
			printf("September, 2023 has 4 number of Sundays");
			break;
		case 'J':
			printf("October, 2023 has 5 number of Sundays");
			break;
		case 'K':
			printf("November, 2023 has 4 number of Sundays");
			break;
		case 'L':
			printf("December, 2023 has 5 number of Sundays");
			break;
		default:
			printf("\033[0;31mINVALID Entry.");
	}
	printf("\n"); //newline looks good
}

// A B C D E F G H I J K L
// 5 4 4 5 4 4 5 4 4 5 4 5
