/*
 * H002: Finding average of marks in 5 subjects by taking marks from the user.
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 7-17-M
 */

#include <stdio.h>

int main() {
	float s1,s2,s3,s4,s5;
	printf("Please enter the marks:\n======================\nUMAT-501:\t");
	scanf("%f",&s1);
	printf("UMAT-502:\t");
	scanf("%f",&s2);
	printf("UMAT-503:\t");
	scanf("%f",&s3);
	printf("UMAT-503:\t");
	scanf("%f",&s3);
	printf("UMAT-504:\t");
	scanf("%f",&s4);
	printf("UMAT-505:\t");
	scanf("%f",&s5);
	printf("======================\n");
	float avg= (s1+s2+s3+s4+s5)/5;
	printf("Average marks: %f\n", avg);
	return 0;
}
