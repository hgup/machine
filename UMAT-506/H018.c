/*
 * sum n**3
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>

int main() {
	int n, sum = 0;
	printf("Enter number: ");
	scanf("%d",&n);
	
	for (int i = 1; i <= n; i ++){
		sum += i*i*i;
	}

	printf("sum: %d\n",sum);
	return 0;
}
