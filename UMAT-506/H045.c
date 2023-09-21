/*
 * Various Operations on Matrices
 * AUTHOR: Hursh Gupta
 * WRITTEN ON:  9-14-T
 */

// TODO: Define row and col # for each of the matrices A, B and C



#include <stdio.h>

#define ROWS 2
#define COLS 2

void InputMatrix(double[][COLS]);
void DisplayMatrix(double[][COLS]);
int checkSymmetric(double[][COLS]);
void AddMatrices(double[][COLS], double[][COLS], double[][COLS]);
void MultiplyMatrices(double[][COLS], double[][COLS], double[][COLS]);
void Transpose(double[][COLS],double[][COLS]);

int main() {
	double A[ROWS][COLS];
	double B[ROWS][COLS];
	double C[ROWS][COLS];

	printf("\nInput A:\n"); InputMatrix(A);
	printf("\nInput B:\n"); InputMatrix(B);

	// check if A is symmetric
	printf("\nA is %s\n",checkSymmetric(A)? "Symmetric": "Not Symmetric");

	printf("\nA:"); DisplayMatrix(A);
	printf("\nB:"); DisplayMatrix(B);

	// C = A + B
	AddMatrices(A,B,C);
	printf("\nA + B = ");
	DisplayMatrix(C);

	// C = A * B
	MultiplyMatrices(A,B,C);
	printf("\nA * B = ");
	DisplayMatrix(C);

	// Transpose of A
	Transpose(A, B);
	printf("\nA Transposed:=");
	DisplayMatrix(B);



}

void InputMatrix(double A[][COLS]){
	for(int i = 0; i < ROWS; i++)
		for(int j = 0; j < COLS; j++) {
			printf("[%02d][%02d]:", i, j);
			scanf("%lf", A[i]+j);
		}
}
void DisplayMatrix(double A[][COLS]){
	printf("\nMATRIX:\n");
	for(int i = 0; i < COLS; i++)
		printf("\t[%02d]",i);
	printf("\n");

	for(int i = 0; i < ROWS; i++){
		printf("[%02d]\t",i);
		for(int j = 0; j < COLS; j++)
			printf("%.2lf\t", A[i][j]);
		printf("\n");
	}
}
int checkSymmetric(double A[][COLS]){
	if (ROWS != COLS){
		return 0;
	}
	int sym = 1; // assume its true
	int i = 0;
	while (sym && i < ROWS){
		for(int j = 0; j < (ROWS-i); j++){ // only upper diagonal traversed
			if(A[i][j] != A[j][i]){
				sym = 0;
			}
		}
		i++;
	}
	return sym;
}
void AddMatrices(double A[][COLS], double B[][COLS], double C[][COLS]){
	for(int i = 0; i < ROWS; i++)
		for(int j = 0; j < COLS; j++)
			C[i][j] = A[i][j] + B[i][j];
}
void MultiplyMatrices(double A[][COLS], double B[][COLS], double C[][COLS]){
	if (ROWS != COLS) printf("Not possible");
	double sum;
	for(int i = 0; i < ROWS; i++)
		for(int j = 0; j < COLS; j++){
			sum = 0;
			for(int p = 0; p < ROWS; p++)
				sum += A[i][p] * B[p][j];
			C[i][j] = sum;
		}
}
void Transpose(double A[][COLS],double B[][COLS]){
	if (ROWS != COLS) printf("Not possible\n");

	for(int i = 0; i < ROWS; i++)
		for(int j = 0; j < COLS; j++)
			B[j][i] = A[i][j];
}
