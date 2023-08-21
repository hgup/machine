/*
 * (RECURSIVE) sum of digits of positive number using recursion
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 8.21.M
 */

#include <stdio.h>

int digitSum(int n){
	if (n < 10) return n;
	else return digitSum(n/10) + (n%10);
}

int main() {
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	printf("sum of all digits of %d is: %d\n", n, digitSum(n));
	return 0;
	return 0;
}
