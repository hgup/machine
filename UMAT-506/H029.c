/*
 * {+} {-} {*} {/} for complex numbers
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>

#include <math.h>
#include <stdio.h>

double mod(double x, double y){
	return (sqrt(x*x + y*y));
}

void add(double x1, double y1, double x2, double y2){
	//sscanf(z1, "%lf + %lfi", &x1, &y1);
	//sscanf(z2, "%lf + %lfi", &x2, &y2);
	printf("%g + %gi \n", x1 + x2 , y1 + y2);
}

void sub(double x1, double y1, double x2, double y2){
	printf("%g + %gi \n", x1 - x2 , y1 - y2);
}

void mul(double x1, double y1, double x2, double y2){
	printf("%g + %gi \n", x1*x2 - y1*y2 , x1*y2 + x2*y1);
}

void div(double x1, double y1, double x2, double y2){
	printf("%g + %gi \n", (x1*x2 + y1*y2)/mod(x2,y2) , (x2*y1 - x1*y2)/mod(x2,y2));
}



int main() {
	double x1, y1, x2, y2;
	printf("Enter z1: ");
	scanf("%lf + %lfi", &x1, &y1);
	printf("Enter z2: ");
	scanf("%lf + %lfi", &x2, &y2);

	printf("z1 + z2 = "); add(x1,y1,x2,y2);
	printf("z1 - z2 = "); sub(x1,y1,x2,y2);
	printf("z1 * z2 = "); mul(x1,y1,x2,y2);
	printf("z1 / z2 = "); div(x1,y1,x2,y2);
	return 0;
}
