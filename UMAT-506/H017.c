/*
 * GCD of a and b
 * AUTHOR: Hursh Gupta
 * DATED: 8-01-23
 */

#include <stdio.h>

void main(){
	int gcd, a, b;

	printf("Enter a and b (separated by a space): ");
	scanf("%d %d", &a, &b);
	
	int i = a + (a>b)*(b-a); // min of the two numbers
	while(!(a%i==0 && b%i==0)) // term condition: They both have a common factor
		i--;
	printf("GCD: %d\n", i);

}
