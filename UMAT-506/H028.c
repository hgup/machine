/*
 * exp(x), sin(x), cos(x) error of 0.001
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>

double exp(double x){
	double sum = 1;
	double add = 1;
	int i = 0;
	do{
		i++;
		add *= x/i;
		sum += add;
		//printf("%d) %lf \n",i,add); some debug code
	} while( add > 0.001);
	return sum;
} // works

double sin(double x){
	double sum = x;
	double add = 1;
	int i = 1;
	do{
		i += 2;	
		add *= -1 * x*x/((i-1)*i);
		sum += add;
	} while( add > 0.001);
	return sum;
}

double cos(double x){
	double sum = 1;
	double add = 1;
	int i = 0;
	do{
		i += 2;		
		add *= -1 * x*x/((i-1)*i);
		sum += add;
	} while( add > 0.001);
	return sum;
}

int main() {
	double n;
	printf("Enter number: ");
	scanf("%lf",&n);
	printf("exp(%4.2lf) \t= %10.4lf\n", n, exp(n));
	printf("sin(%4.2lf) \t= %10.4lf\n", n, sin(n));
	printf("cos(%4.2lf) \t= %10.4lf\n", n, cos(n));
	
	return 0;
}
