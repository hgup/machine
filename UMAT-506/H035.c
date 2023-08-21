/*
 * (RECURSIVE) Find sum of 1st n natural numbers
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 8.21.M
 */

#include <stdio.h>

int sum(int n){
	if (n==1) return 1;
	else return sum(n-1) + n;
}

int main() {
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	printf("sum of first %d natural numbers: %d\n", n, sum(n));
	return 0;
}
