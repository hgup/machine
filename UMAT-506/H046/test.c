/*
 * testing `mystring.c`
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>
//#include "mystring.h"
#include <string.h>

int main() {
	char *a = "hello";
	printf("length: %ld\n", strlen(a));
	printf("compare: %d, %d and %d\n", strcmp("hi","hi"), strcmp("hiya", "hi"), strcmp("ha","hi"));
	printf("substring: high hi:  %d", substr("high","hi"));
	printf("substring: hhha hi:  %d", substr("high","hi"));

	return 0;
}
