#include <stdio.h>
#include <math.h>

typedef struct{
  double real;
  double img;
} complex;

complex add(complex a, complex b){

  complex sum;

  sum.real = a.real + b.real;
  sum.img = a.img + b.img;

  return sum;
}

complex sub(complex a, complex b){

  complex result;

  result.real = a.real - b.real;
  result.img = a.img - b.img;

  return result;
}

complex mul(complex a, complex b){

  complex result;

  result.real = (a.real * a.real) - (b.real * b.real);
  result.img = (a.real * b.img) - (a.img * b.real);

  return result;
}

complex conjugate(complex a){
  a.img = -1 * a.img;

  return a;
}

complex div(complex a, complex b){

  complex result;
  double modulus_b;

  modulus_b = sqrt(b.real*b.real + b.img*b.img);
  result = add(a,conjugate(b));

  result.real = result.real/modulus_b;
  result.img = result.img/modulus_b;

  return result;
}

void printc(complex a){
  if(a.img < 0)
    printf("%lf - i%lf", a.real, -1 * a.img);
  else
    printf("%lf + i%lf", a.real, a.img);
}

void inputc(char message[], complex *a){
  printf("%s\n", message);
  printf("real:"); scanf("%lf", &(a -> real));
  printf("img:"); scanf("%lf", &(a -> img));
}

int main(){
  complex a,b;
  
  inputc("Enter complex #1", &a);
  inputc("Enter complex #2", &b);
  
  printf("\nsum: "); printc(add(a,b));
  printf("\ndiff: "); printc(sub(a,b));
  printf("\nmul: "); printc(mul(a,b));
  printf("\ndiv: "); printc(div(a,b));
  printf("\n");
}
