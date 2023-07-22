/*
 * Program that swaps values of two variables
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 22-17-S
 */

#include <stdio.h>

int main() {
	int a = 1;
	int b = 2;
	printf("a: %d \t b: %d\n",a,b); //before
	a = a + b - (b=a);
	printf("a: %d \t b: %d\n",a,b); //after
	return 0;
}
