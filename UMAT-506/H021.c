/*
 * Print First n prime numbers
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <math.h>
#include <stdio.h>

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

	int c = 0, i = 0;
	printf("First %d prime numbers be like:\n",n);
	while(i < n)
		if (isPrime(++c)) printf("%d)\t%d\n",++i,c);

	return 0;
}
