/*
 * Product of n integers entered by user. skip the zeros
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>

int main() {

	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	int in; 		// input
	int prod = 1; 	// product
	int i = 1; 		// counter

	do{
		printf("(%d)>\t",i);
		scanf("%d", &in);

		if (in == 0) {
			printf(" Skipping Zero ");
			continue;
		}

		i++;
		prod *= in;

	} while( i <= n);

	printf("The product is %d.\n", prod);
	return 0;
}
