/*
 * (ARRAY) Take input (int) and store its multiplication table in an array and print it
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#define tableLimit 10

#include <stdio.h>
#include <math.h>

void printArray(int table[], int limit){
	int n = table[0];
	int s = (int) log10(table[limit-1]) || 1; //log(0) removes newline
	for(int i = 0; i < limit; i++){
		printf(" %d x %2d = %*d \n", n, i+1, s+1, table[i]); 
	}
}

int main() {
	
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	int multiplicationTable[tableLimit];

	for(int i = 0; i < tableLimit; i++){
		multiplicationTable[i] = n * (i+1);
	};

	printArray(multiplicationTable, tableLimit);
	return 0;

}
