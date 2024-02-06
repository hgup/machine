#include "poly.h"


polyptr createPolynode(void){
    
  polyptr HEAD = (polyptr) malloc( sizeof(Polynode) );

  if(HEAD){
    HEAD->next = NULL;
    return HEAD;
  }
  else printf("ERROR: Failed to create Polynomial");
  return NULL;

}

void addPolyTerm(polyptr a, int coeff, int exp ){

  while(a->next){
    if (exp == a->next->exp){
      a->next->coeff += coeff;
      return;
    }
    else if( exp > a->next->exp ){
      polyptr new = (polyptr) malloc ( sizeof(Polynode) );
      if (!new) return;
      new->exp = exp;
      new->coeff = coeff;
      new->next = a->next;
      a->next = new;
      return;
    }
    a = a->next;
  }
  polyptr new = (polyptr) malloc ( sizeof(Polynode) );
  if (!new) return;
  new->exp = exp;
  new->coeff = coeff;
  new->next = a->next;
  a->next = new;
  return;

}

void displayPoly(polyptr a){

  a = a->next;
  printf("[");
  while(a){
    printf("%dx^%d%s", abs(a->coeff) , a->exp, a->next ? a->next->coeff < 0 ?" - " : " + " : "");
    a = a->next;
  }
  printf("]\n");

}

polyptr addPoly(polyptr a, polyptr b){
  
  polyptr sumpoly = createPolynode();
  polyptr sum = sumpoly;

  // skip the dummy node
  a = a->next;
  b = b->next;

  while(a && b){
    sum->next = createPolynode();
    sum = sum->next;
    if(a->exp == b->exp){
      sum->exp = a ->exp;
      sum->coeff = a->coeff + b->coeff;
      a = a->next;
      b = b->next;
    }
    else if(a->exp > b->exp){
      sum->exp = a->exp;
      sum->coeff = a->coeff;
      a = a->next;
    }
    else {
      sum->exp = b->exp;
      sum->coeff = b->coeff;
      b = b->next;
    }
  }

  // copy the terms from the non-empty one
  polyptr c = a ? a : b;
  while(c){
    sum->next = createPolynode();
    sum = sum->next;
    sum->exp = c->exp;
    sum->coeff = c->coeff;
    c = c->next;
  }

  return sumpoly;
  
}

polyptr multiplyPoly(polyptr a, polyptr b){
  
  polyptr ta = a->next;
  polyptr tb = b->next;
  polyptr mul = createPolynode();

  while(ta){
    polyptr tb = b->next;
    while(tb){

      addPolyTerm(mul,ta->coeff * tb->coeff, ta->exp + tb->exp);
      tb = tb->next;
    }
    ta = ta->next;
  }
  return mul;

}
