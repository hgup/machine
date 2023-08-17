/*
 * Binary to Decimal
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 8.17.T
 */

#include <stdio.h>

int d2b(int d) {
	int b = 0;
	while (d != 0) {
		b = 10*b + (d%2);
		d = d/2;
	}
	return b;
}

int main() {
	int n;
	printf("Enter decimal number: ");
	scanf("%d",&n);

	printf("Binary formatted: %d\n", d2b(n));
	return 0;
}
