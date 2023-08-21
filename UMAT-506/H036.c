/*
 * (RECURSIVE) find gcd of 2 numbers
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 8.21.M
 */

#include <stdio.h>

int gcd(int a, int b){
	if (a == b) return a;
	else if (a > b)   return gcd(a-b, b);
	else /* (a < b)*/ return gcd(a, b-a);
}

int main() {
	int a,b;
	printf("Enter numbers (separated by space): ");
	scanf("%d %d",&a, &b);
	printf("GCD(%d, %d) = %d\n", a, b, gcd(a,b));
	return 0;
}
