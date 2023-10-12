#include"matrix.h"
// implement functions in matrix.h here


// Allocates 2-D double array of r and c size
double ** allocate(int r, int c)
{
  double **p = (double**) malloc(r * sizeof(double**));   // malloc -> returns pointer to pointers

  for(int i = 0; i < r; i++){
    *(p+i) = (double*) malloc(c * sizeof(double));        // malloc -> returns pointers to pointers
  }

  return p;
}

//Prints 2-D array a of size r and c
void print_matrix(double **a, int r, int c){
  printf("Printing Matrix\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++)
      printf("%lf ", *(*(a+i)+j));
    
    printf("\n");
  }
}

//Inputs 2-D array a of size r and c from user
void read_matrix(double ** a, int r, int c){
  printf("Taking Matrix input\n");
  for (int i = 0; i < r; i++) {
    printf("[%d] ",i);
    for (int j = 0; j < c; j++){
      printf(" ");
      scanf("%lf", (*(a+i)+j));
    }
    printf("\n");
  }
}
