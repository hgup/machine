/*
 * Sort an array of 10 numbers using bubble sort, selection sort and merge sort
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

void copyArray(double[], double[], int);
void readArray(double[], int);
void bubbleSort(double[], int);
void selectionSort(double[], int);
void printArray(double[], int);

#include <stdio.h>
#define N 5

int main() {
	double A[N], B[N];
	readArray(A, N);
	copyArray(A, B, N);
	printf("\nBubble sort========\n");
	bubbleSort(A, N);
	printArray(A, N);
	printf("\nSelection sort========\n");
	selectionSort(B, N);
	printArray(B, N);
}


void copyArray(double A[], double B[], int size){
// copies B <- A (A remains unchanged)

	for(int i = 0; i < size; i++)
		B[i] = A[i];
}

void readArray(double A[], int size){

	printf("\nENTER THE ARRAY\n================\n");
	for(int i = 0; i < size; i++){
		printf("Enter #%d: ", i); 
		scanf("%lf", &A[i]); 
	}

}


void _swap(double A[], int a, int b){
	double temp;
	temp = A[a];
	A[a] = A[b];
	A[b] = temp;
}

void bubbleSort(double A[], int size){
	for(int i = 0; i < size; i++)
		for(int j = i; j < size -1; j++)
			if(A[j+1] < A[j]) _swap(A, j, j+1);
	
}

void selectionSort(double A[], int size){
	int mindex = 0;
	for(int i = 0; i < size-1; i++){ 

		mindex = i;
		for(int j = i+1; j < size; j++)
			if(A[j] < A[mindex]) mindex = j;

		_swap(A, i, mindex);
	}
}

void printArray(double A[], int size){
	printf("\nARRAY ELEMENTS\n================\n");

	for(int i = 0; i < size; i++){
		printf("Element #%d:\t %7.2lf \n", i, A[i]);
	}
}
