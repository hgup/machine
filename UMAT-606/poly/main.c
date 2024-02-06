#include "poly.h"

int main(){

  polyptr a,b,c;

  printf("========= INPUT ==========\n");
  a = createPolynode();
  addPolyTerm(a, 4, 3);
  addPolyTerm(a, 4, 6);
  addPolyTerm(a, 7, 4);
  printf("a \t=\t");displayPoly(a);

  b = createPolynode();
  addPolyTerm(b, 3, 2);
  // addPolyTerm(b, -6, 3);
  // addPolyTerm(b, 5, 6);
  // addPolyTerm(b, 7, 4);
  // printf("b \t=\t");displayPoly(b);
  //
  // printf("\n========= ADDITION ==========\n");
  // c = addPoly(a,b);
  // printf("a + b \t=\t");displayPoly(c);
  //
  // printf("\n========= MULTIPLICATION ==========\n");
  //
  // c = multiplyPoly(a,b);
  // printf("a * b \t=\t");displayPoly(c);

}
