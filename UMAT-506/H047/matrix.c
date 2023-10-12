#include"matrix.h"
#include <alloca.h>
// implement functions in matrix.h here


// Allocates 2-D double array of r and c size
double ** allocate(int r, int c)
{
  double **p = (double**) malloc(r * sizeof(double**));
  // malloc -> returns pointer to pointers

  for(int i = 0; i < r; i++){
    *(p+i) = (double*) malloc(c * sizeof(double));
    // malloc -> returns pointers to pointers
  }

  return p;
}

//Prints 2-D array a of size r and c
void print_matrix(double **a, int r, int c){
  printf("\nPRINTING MATRIX\n\n\t");
  for(int i = 0; i < c; i++) printf("[%d]\t\t",i);
  printf("\n");
  for (int i = 0; i < r; i++) {
    printf("[%d]\t",i);
    for (int j = 0; j < c; j++)
      printf("%lf\t", *(*(a+i)+j));
    printf("\n");
  }
}

//Inputs 2-D array a of size r and c from user
void read_matrix(double ** a, int r, int c){
  printf("\nTAKING MATRIX INPUT\n\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++){
      printf("[%d][%d] ", i,j);
      scanf("%lf", (*(a+i)+j));
    }
  }
}

//Returns trace of 2-D array a of size r 
double trace_matrix(double ** a, int r){
  double trace = 0;
  for(int i = 0; i < r; i ++){
    trace += *(*(a+i)+i);
  }
  return trace;
}

//checks  2-D array a of size r is symmetric or not
int check_symmetric_matrix(double ** a, int r){
  for(int i = 0; i < r; i++){
    for(int j = i+1; j < r; j++){
      if(a[i][j] != a[j][i]) return 0;
    }
  }
  return 1;
}
//Computes sum of a and b and returns in new matrx
double ** add_matrix(double ** a, double ** b, int r, int c){
  double **sum = allocate(r, c);
  for(int i = 0; i < r; i++)
    for (int j = 0; j < r; j++)
      sum[i][j] = a[i][j] + b[i][j];
       
  return sum;
}

//Computes difference of a and b and returns in new matrx
double ** subtract_matrix(double ** a, double ** b, int r, int c){
  double **sum = allocate(r, c);
  for(int i = 0; i < r; i++)
    for (int j = 0; j < r; j++)
      sum[i][j] = a[i][j] - b[i][j];
       
  return sum;
}

//Computes product of a and b and returns in new matrix
double ** product_matrix(double ** a,  int r1, int c1,double ** b, int r2, int c2){
  double **product = allocate(r1, c2);
  int p = c1;       // (m x p) and (p x n)
  
  if (c1 != r2){
    printf("ERROR: Attempting to print incompatible matrices\n");
    return product;   // return garbage TODO: how to throw error
  }

  for(int i = 0; i < r1; i++){
    for(int j = 0; j < c2; j++){
      for(int k = 0; k < p; k++) product[i][j] += a[i][p] * b[p][j];
    }
  }

  return product;
}

