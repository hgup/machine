/*
 * check whether a number is prime or not
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>
#include <math.h>

int isPrime(int n){
	
	if (n==1) return 0;

	int c = (int) sqrt(n); // optimized upper limit to check
	
	for (int i = 2; i <= c; i++)
		if (n%i == 0)
			return(0); //not prime

	return(1); //prime
}

void printIsPrime(int num){

	if (isPrime(num))
		printf("%d is Prime\n", num);
	else
		printf("%d is not Prime\n", num);

}

void nPrime(int n){
	int c = 0, i = 0;
	printf("First %d prime numbers be like:\n",n);
	while(i < n)
		if (isPrime(++c)) printf("%d] %d\n",++i,c);
}

void main() {
	
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	nPrime(n);

}

// NOTE: while(...); putting the semi-colon by accident will make it an infinte loop
