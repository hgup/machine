/* AUM SRI SAI RAM
 *
 * CIE2 C Programming Lab
 * REGD: 211219
 * DATE: Sept 9, 2023
 * 
 */
#include <stdio.h>

// Q1
#define N 5

// function declarations
long int sumSeries(int);
void readArray  (double[], int);
void sortArray  (double[], int);
void printArray (double[], int);
void printMinMax(double[], int);


int main() {

	double A[N];

	// Q2
	printf("Q2: Ans: %ld\n", sumSeries(N));
	
	// Q3
	readArray(A, N);
	
	// Q4
	sortArray(A, N);

	// Q5
	printArray(A, N);

	// Q6
	printMinMax(A, N);

	return 0;
}


// NOTE: helper functions are **intentionally** not declared at the top
// They are declared with the underscore ( _ ) prefix to show that they are helper functions


// Solution 2 -------------------------
long int _fact(long int n){
// returns n! (n >= 0)
//
	if (n <= 1) return 1; 		// base case
	else return n * _fact(n-1);  // recursive call
}

long int sumSeries(int n){
// returns the sum of series 1!/1 + 2!/2 + ... + n!/n
//
	long int sum = 1;

	for(int i = 1; i < n; i++){
		sum += _fact((long int) i); // OPTIMIZATION: k!/k = (k-1)!
	}

	return sum;
}
// -----------------------------------


// Solution 3
void readArray(double A[], int size){
// read values from the user into array A of given size
//
	printf("\nENTER THE ARRAY\n================\n");

	for(int i = 0; i < size; i++){
		printf("Enter #%d: ", i); // prompt
		scanf("%lf", &A[i]);  	  // input
	}

}


// Solution 4-------------------------
void _swap(double A[], int a, int b){
// swap A[a] with A[b] where a and b are indices
//
	// temp var for swapping
	double temp;

	// swapping the values
	temp = A[a];
	A[a] = A[b];
	A[b] = temp;
}

void sortArray(double A[], int size){
// Sorting using selection Sort technique
//
	int mindex = 0;					 // index of the known minimum element

	for(int i = 0; i < size-1 /*OPTIMIZATION last element sorted by def*/; i++){ 

		mindex = i; // let A[i] be the minimum (known)

		for(int j = i+1; j < size; j++)
			if(A[j] < A[mindex]) mindex = j; // minimum changes only if its better

		_swap(A, i, mindex); // swapped their positions
	}
}
//------------------------------------


// Solution 5
void printArray(double A[], int size){
// prints array values with index (e.g. Element #6:		533.36)
//
	printf("\nARRAY ELEMENTS\n================\n");

	for(int i = 0; i < size; i++){
		printf("Element #%d:\t %7.2lf \n", i, A[i]); // print array values with formatting
	}
}


// Solution 6--------------------------
void printMinMax(double A[], int size){
// finds the minimum and maximum of elements of an array
//
	int min = 0;		// index of minimum of array
	int max = 0;		// index of maximum of array

	for (int i = 0; i < size; i++){

		if(A[i] > A[max]) max = i;
		if(A[i] < A[min]) min = i;
		
	}

	printf("\nSTATS OF THE ARRAY\n=============\n");
	printf("Minimum: %7.2lf\n", A[0]);
	printf("Maximum: %7.2lf\n", A[size - 1]);
}

// NOTE: we could have used sort function to get min and max
// 		 but that would require **unnecessary computation** to sort the full array
//-------------------------------------

// EOF
