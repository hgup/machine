#include"matrix.h" //Note not matrix.c but matrix.h
//test functions here


int main(){
  int r, c; 
  // printf("Enter Rows:");
  // scanf("%d", &r);
  // printf("Enter Cols:");
  // scanf("%d", &c);
  r = ROW;
  c = COL;
  double **mtx = allocate(r,c);
  read_matrix(mtx, r, c);
  print_matrix(mtx, r, c);
  printf("Trace of matrix: %lf\n", trace_matrix(mtx, r));
  printf("The matrix is%s symmetric\n", check_symmetric_matrix(mtx, r)? "" : " not");

  return 0;
}
