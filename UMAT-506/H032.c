/*
 * swap two #s
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 8.21.M
 */

#include <stdio.h>

void swap(int *a, int *b){
	*a = *a + *b - (*b = *a);
}

int main() {
	int n1, n2;
	printf("Enter number 1: ");
	scanf("%d",&n1);
	printf("Enter number 2: ");
	scanf("%d",&n2);

	printf("Before swapping\nn1=%d, n2=%d\n", n1, n2);
	swap(&n1, &n2);
	printf("After swapping\nn1=%d, n2=%d\n", n1, n2);


	return 0;

}
