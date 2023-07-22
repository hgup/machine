
/*
 * Relational operators workbook
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>

int main() {
	//printf("%d",sizeof(double));
	//double a = 1.0;

	int a = 4, b = 2;

	printf("Answer is %d\n", a + (b=0) > 5 && (a = 0) < 5 > a + b - 2);
	printf("%d\n",b);
	return 0;
}

/*
 * (10 <= L <= 1000) is the same as ((10 <= L) <= 1000) which is always true so ensure to use && (and) operator
 */
