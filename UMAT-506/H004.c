/*
 * Finds the sum of a 3 digit number
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 22-7-S
 */

#include <stdio.h>

int main() {
	int n, sum;
	printf("enter number: ");
	scanf("%d", &n);
	sum = n % 10 + (n/10)%10 + n/100;
	printf("sum is: %d\n",sum);
	return 0;
}
