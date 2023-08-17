/*
 * Pascal's Triangle
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>

long int fact(int);
int comb(int, int);

void main() {
	int n, c;
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		for(int k = i+1; k < n; k++)
			printf("\t");
		for(int j = 0; j <= i; j++){
			c = comb(i,j);
			printf("%d\t\t",c);
		}
		printf("\n");
	}
}

long int fact(int n){ // them factorials are quite big (long)
	int prod = 1;
	for(int i = 1; i <= n; i++)
		prod *= i;
	
	return prod;
}

int comb(int n, int r){
	return (fact(n)/fact(n-r)*fact(r));
}

