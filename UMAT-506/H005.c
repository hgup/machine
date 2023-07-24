/*
* PURPOSE: Evaluate a double expression
* AUTHOR: Hursh Gupta
* DATED: 7-24-23
*/

#include <stdio.h>
#include <math.h>

int main(){
    double A , B;
    scanf( "%lf", &A );
    B = 2 * M_PI * log(sqrt(1/9.8)) * pow(0.25 * sin(A/2), 3.0) + exp(1.32);
    printf("Resultant: %lf\n", B);
}