/*
 * Follow the steps:
 * a. Print addr and values of array of 5 ints (non-initialized)
 * b. initialize with 1,2,3,4,5 and repeat
 * c. print values using a[i], i[a], *(a+1), *(i+a) and addr (a+i)
 * d. Follow steps given in APPENDIX
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>

#define LEN 5

int valAndAddr(int a[], int length){
	printf("\nVALUE\t\t ADDRESS\n");
	for(int i = 0; i < length; i++)
		printf("%10d\t %p\n", a[i], &a[i]);
	return 0;
}

int main() {
	int a[LEN];
	// a
	valAndAddr(a, LEN);

	// b
	for(int i = 0; i < LEN; a[i++] = i);
	valAndAddr(a, LEN);

	// c - Yes all four are same
	printf("\nEXPLORING SYNTAX\n");
	for(int i = 0; i < LEN; i++){
		printf("a[%d] = %d\t",i, a[i]); // the compiler does *(a + i)
		printf("%d[a] = %d\t",i, i[a]); // the compiler does *(i + a)
		printf("*(a + %d) = %d\t",i, *(a + i)); 
		printf("*(%d + a) = %d\t",i, *(i + a)); 
		printf("ADDR: %p\t",(a+i));
		printf("\n");
	}

	// d
	printf("\nOUTPUT\n");
	int *ptr;
	ptr =a ;
	for(int i=0; i<5; i++){
		printf("%p \t %d\n",ptr,*ptr);
		ptr++;
	}

}




/*
APPENDIX
 
int *ptr;
ptr =a ;
for(i=0; i<5; i++){
	printf("%u \t %d",ptr,*ptr) 
	ptr++;
}

*/
