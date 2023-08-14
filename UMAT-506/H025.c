/*
 * Multiplication from 5 to 9 in separate columns (for) (\t and \n)
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>

void printLine(int first, int mul, int rowStart, int rowEnd, int hi){

	printf("\e[1m\e[7m%d\e[39m\e[27m",first);
	
	switch(hi){
		case 1:
			printf("\e[1m\e[7m\t");
			break;
		default:
			printf("\t");
	}
	
	for(int i = rowStart; i <= rowEnd; i++){
		printf("%d\t",i*mul);
	}
	printf("\n\e[39m\e[27m");

}

int main() {
	int n,m;
	printf("Enter numbers (separated by space): ");
	scanf("%d %d", &n, &m);

	printLine(0, 1, n, m, 1);
	for (int i = 1; i <= 10; i++){
		printLine(i, i, n, m, 0);
	}
	return 0;
}
