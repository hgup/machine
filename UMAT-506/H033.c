/*
 * Cartesian coordinates to polar coordinates
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 8.21.M
 */

#include <stdio.h>
#include <math.h>

double modulus(double x, double y){
	return (sqrt(x*x + y*y));
}

double Arg(double x, double y){
	return (atan(y/x));
}

void c2p(double x, double y){
	printf("%lf+i%lf = %lf e^(%lf)i\n", x, y, modulus(x,y), Arg(x,y));
}

int main() {
	double x,y ;
	printf("Enter complex #: ");
	scanf("%lf+%lfi",&x, &y);
	c2p(x, y);
	return 0;
}
