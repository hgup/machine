#include"matrix.h" //Note not matrix.c but matrix.h
//test functions here


int main(){
  int r, c; 
  scanf("%d", &r);
  scanf("%d", &c);
  r = ROW || r;
  c = COL || c;
  double **mtx = allocate(r,c);
  print_matrix(mtx, 3, 3);
  return 0;
}
