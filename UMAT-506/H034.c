/*
 * (RECURSIVE) Find the nth term of fibonacci series
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 8.21.M
 */

#include <stdio.h>

int fib(int n){
	if (n <= 1) return n;
	else return fib(n-1) + fib(n-2);
}

int main() {
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	printf("%dth term of fibonacci series: %d\n", n, fib(n));
	return 0;
}
