/*
 * Find the value of Pi
 * 4(1 - 1/3 + 1/5 - 1/7)
 * sqrt(sum(6/i^2))
 * 4 * 2/3 * 4/3 * 4/5 * 6/5
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <math.h>
#include <stdio.h>

double pi1(int precision){
	double pi = 0;
	for (int i = 1; i <= precision; i++){
		pi += 4 * 1.0/(2*i-1) * pow(-1,i+1);
	}
	return pi;
}

double pi2(int precision){
	double pi = 0;
	for (int i = 1; i <= precision; i++){
		pi += 6.0/(i*i); //type check... didn't raise error
	}
	return sqrt(pi);
}

double pi3(int precision){
int n = 2, d = 3;
	double pi = 4;
	precision = precision/2;
	for (int i = 1; i <= precision; i++){
		pi *= (n*1.0)/(d*1.0);
		n += 2;
		pi *= (n*1.0)/(d*1.0);
		d += 2;
	}
	return pi;
}

int main() {
	int n;
	printf("Enter Precision: ");
	scanf("%d",&n);
	printf("Pi #1: %lf\n", pi1(n));
	printf("Pi #2: %lf\n", pi2(n));
	printf("Pi #3: %lf\n", pi3(n));
	return 0;
}
