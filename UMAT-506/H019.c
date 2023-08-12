/*
 * 0/1 + 1/2 + 2/3 + ... n/(n+1)
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>

int main() {
	int n;
	double sum;
	printf("Enter n: ");
	scanf("%d",&n);

	for (int i = 0; i <= n; i++) {
		sum += i/(i+1.0);
	}

	printf("sum of series: %lf\n", sum);
	return 0;
}
