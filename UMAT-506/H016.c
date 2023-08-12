/*
 * Factorial of n
 * AUTHOR: Hursh Gupta
 * DATED: 8-01-23
 */

#include <stdio.h>

void main(){
	int n, fact = 1;

	printf("Enter n: ");
	scanf("%d",&n);

	int i = 1;
	while (i <= n){
		fact *= i;
		i++;
	}

	printf("Factorial: %d\n", fact);

}

// NOTE:
// You wrote 
// 		printf("Factorial: %d\n", &fact);
// due to which it was asking you to put it as long int, since you gave the memory address with &
