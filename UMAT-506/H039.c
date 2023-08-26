/*
 * (ARRAY) FOLLOW SPECS:
 * RegdNo[n] contains regdno of students (predefine n) (You cannot ask user to enter n. Why?)
 * Marks[n] contains marks of 5 students in c programming lab
 *
 * OUTPUT FORMAT:
 * Topper is \t Regdno:%d with maxsimum marks \t %d:
 * Avg marks:
 * Minimum marks:
 * Standard Deviation of marks:
 * Median of marks:
 *
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>
#include <math.h>
#define NUM_STUDENTS 5

////////////////////////////////////// LIST OPERATIONS ////////////////////////////////////////

int inList(int List[], int lastIndex, int value){
	for (int i = 0; i < lastIndex; i++ ){
		if(value == List[i]){
			return 1;
		}
	}
	return 0;
}

// try inputting a character and see what happens
void insert(int List[], int index, int validA, int validB, char message[], int unique){
	int n;
	while (1){
		printf("%s: ", message);
		scanf("%d",&n);
		
		if (unique && inList(List, index, n)){ // duplicate entry
			printf("Unique is %d",unique);
			printf("Already entered. Ignoring... Please Re-");
			continue;
		}
		if (!(validA <= n && n <= validB)){ // invalid range
			printf("Invalid #. Please enter in range (%d, %d)\n", validA, validB);
			continue;
		}
		break; // no issues
	}

	List[index] = n;
}
int indexOf(int List[],int el, int from, int to){
// check `from` index in `List[]` of `size` for element `el`
	for(int i = from; i < to; i++){
		if(List[i] == el) return i;
	}

	return -1; // not found
}

////////////////////////////////////// STATISTICS ///////////////////////////////////

double mean(int List[], int size){
	double sum = 0;
	for(int i = 0; i < size; i++){
		sum += List[i];
	}
	return (sum/size);
}

int max(int List[], int size){
	int m = List[0];
	for(int i = 1; i < size; i++){
		if(List[i] > m) m = List[i];
	}
	return m;
}

int min(int List[], int size){
	int m = List[0];
	for(int i = 1; i < size; i++){
		if(List[i] < m) m = List[i];
	}
	return m;
}

double stdev(int List[], int size){
	double acc = 0;			// accumulator
	double m = mean(List, size);
	for(int i = 0; i < size; i++){
		acc += pow(List[i] - m,2);
	}
	// unbiased st. deviation
	return (acc/(size - 1));
}


//////////////////////////////////////// MAIN ////////////////////////////////////////
int main() {
	int RegdNo[NUM_STUDENTS];
	int Marks[NUM_STUDENTS];

	// Enter data
	for (int i = 0; i < NUM_STUDENTS; i++) {
		insert(RegdNo, i, 200000, 3000000, "Enter RegdNo", 1);
		insert(Marks, i, 0, 100, "Enter Mark in C LAB", 0);
	}

	printf("\n\nCLASS RESULTS\n==========\n\n");

	int maxMarks = max(Marks,NUM_STUDENTS);
	// Print toppers
	printf("Class Topper(s) with maximum marks: %3d:\n", maxMarks);
	int i = indexOf(Marks, maxMarks, 0, NUM_STUDENTS);
	// in case there are more than 1 toppers
	while(i != -1){
		printf("Regd #:%d \n", RegdNo[i]);
		i = indexOf(Marks, maxMarks, i+1, NUM_STUDENTS);
	}
	printf("\n");

	// Class Statistics
	printf("Avg marks: %3.2lf\n", mean(Marks,NUM_STUDENTS));
	printf("Minimum marks: %3d\n", min(Marks, NUM_STUDENTS) );
	printf("Standard Deviation of marks: %3.2lf\n", stdev(Marks, NUM_STUDENTS));
	//printf("Median of marks:", median(Marks, NUM_STUDENTS));
	return 0;

}
		

