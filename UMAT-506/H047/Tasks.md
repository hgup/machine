# Aum Sri Sai Ram

# Assignment on 2-d arrays:
1. Use Dynamic Allocation and De-allocation. 
2. Proper indentation and comments equired.
3. Compilation procedure given at the end.

## Define `matrix.h` as below
```c
double ** allocate(int r, int c); //Allocates 2-D double array of r and c size
void print_matrix(double ** a, int r, int c); //Prints 2-D array a of size r and c
void read_matrix(double ** a, int r, int c); //Inputs 2-D array a of size r and c from user
double trace_matrix(double ** a, int r); //Returns trace of 2-D array a of size r 
int check_symmetric_matrix(double ** a, int r); //checks  2-D array a of size r is symmetric or not
double ** add_matrix(double ** a, double ** b, int r, int c); //Computes sum of a and b and returns in new matrix
double ** subtract_matrix(double ** a, double ** b, int r, int c); //Computes difference of a and b and returns in new matrix
double ** product_matrix(double ** a,  int r1, int c1,double ** b, int r2, int c2); //Computes product of a and b and returns in new matrix
```

## Define `matrix.c` as below

```c
#include"matrix.h"
// implement functions in matrix.h here
```

## Define `main_matrix.c` as below
```c
#include"matrix.h" //Note not matrix.c but matrix.h
//test functions here
```

### Compilation
```c
$gcc -c matrix.c //it will create matrix.o
$gcc -c main_matrix.c //it will create main_matrix.o
$gcc -o matrix matrix.o main_matrix.o  //it will create executable file matrix
$./matrix //run the executable
```


