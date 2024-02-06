#ifndef _utils_h
  #define _utils_h
  #include <stdio.h>
  #include <stdlib.h>
#endif



#ifndef _poly_h
  #define _poly_h
  typedef struct poly{
    int coeff;
    int exp;
    struct poly* next;
  } Polynode;

  /*
  `Polynomial` Node with integer `coeff` (coefficients) and 
  integer `exp` (exponents) in decreasing order.

  `next` pointer to next Polynomial Node
  */
  typedef Polynode* polyptr;


  /*
   Creates and returns an empty `Polynomial` Dummy Node 
   */
  polyptr createPolynode(void);


  /*
   * add a term to the polynomial with  coeff `a` and exponent `k`
   *
   * i.e. `a` x^ `k`
   */
  void addPolyTerm(polyptr, int a, int k);


  /*
   * Displays the `Polynomial` like a (human friendly) polynomial
   */
  void displayPoly(polyptr);


  /*
   * Returns the sum of two `Polynomial` as a new `Polynomial`
   * @param `a` Polynomial 1
   * @param `b` Polynomial 2
   *
   * @returns `a + b`
   */
  polyptr addPoly(polyptr a, polyptr b);

  
  /*
   * Returns the product of two `Polynomials` as a new `Polynomial`
   * @param `a` Polynomial 1
   * @param `b` Polynomial 2
   *
   * @returns `a * b`
   */
  polyptr multiplyPoly(polyptr a, polyptr b);
   
#endif
