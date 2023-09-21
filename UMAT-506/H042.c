/*
 * Program that swaps even and odd position numbers in array of 10 doubles
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>

#define LEN 10

void inputArray(double *p, int length){
	for(int i = 0; i < length; i++){
		printf("Enter #%d: ", i);
		scanf("%lf", p++);
	}
}

void printArray(double *p, int length){
	for(int i = 0; i < length; i++)
		printf("%5.2lf\t", *(p++));
		//printf("#%d: %5.2lf\t", i, *(p++));
	printf("\n");
}

void swapInArrays(double *p, int length){
	double temp;	
	for(int i =0; i < length; i+= 2){
		temp = p[i];
		p[i] = p[i+1];
		p[i+1] = temp;
	}
}
	

int main() {
	double doubles[LEN];
	double *p = doubles;

	inputArray(doubles, LEN);
	printArray(doubles, LEN); // after swap
	swapInArrays(doubles, LEN);
	printArray(doubles, LEN);

	return 0;
}
