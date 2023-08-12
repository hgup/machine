/*
 * a^b
 * AUTHOR: Hursh Gupta
 * DATED: 8-02-23
 */

#include <stdio.h>

void main()
{
	int a, b, result = 1;
	printf("Enter in this format: a^b\n>> ");
	scanf("%d^%d",&a,&b);
	int i = 1;
	while(i<=b)
	{
		result *= a;
		i++;
	}
	printf("result: %d\n", result);
	
}
