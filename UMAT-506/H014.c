/*
 * Sum of first n natural numbers
 * AUTHOR: Hursh G.
 * DATED: 8-02-23
 */

#include <stdio.h>

void main(){
	int n, sum = 0;
	scanf ("%d", &n);
	int i = 0;
	while (i <= n){
		sum += i;
		i++;
	}
	printf("Sum is: %d\n", sum);
}
