/*
 * Check whether a number is prime or not
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>
#include <math.h>

int isPrime(int n){
	
	if (n<=1) return 0;

	int c = (int) sqrt(n); // optimized upper limit to check
	
	for (int i = 2; i <= c; i++)
		if (n%i == 0)
			return(0); //not prime

	return(1); //prime
}


int main() {
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	if (isPrime(n))
		printf("%d is Prime\n", n);
	else
		printf("%d is not Prime\n", n);
	return 0;
}
