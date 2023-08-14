/*
 * sum of n terms in GS
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 8.14.23
 */

#include <stdio.h>

int main() {
	int n, r;
	printf("Enter terms: ");
	scanf("%d",&n);
	printf("Enter common ratio: ");
	scanf("%d",&r);
	
	int sum = 0;
	int g = 1, i = 0;
	
	do{
		sum += (g*=r); // multiply g by next i and add it to the sum
		i++;
	} while (i < n);

	printf("Sum is %d.\n",sum);
	
	return 0;
}
