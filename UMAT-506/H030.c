/*
 * Average Marks obtained by all students of the class
 * Students need not appear for all subjects
 * Display regd no. and average marks in # of subjects passed
 *
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 8.17.T
 */

#include <stdio.h>
double getMark(char sub[]){
	double mark;
	printf("%s: ", sub);
	scanf("%lf", &mark);
	return mark;
}

double getAverage(int reg){
	printf("Entering marks for REGD: %d\n Put -1 for skipping\n",reg);
	
	double sum = 0;
	double mark; // for every individual subject 
	int n = 0; // number of subjects to consider
	char subs [7] [10] = {"Maths", "Physics", "Chemistry", "Anatomy", "Zoology", "C-LAB", "Python-LAB"};
	for(int i = 0; i< 7; i++){
		mark = getMark(subs[i]);
		if (mark <= 0) continue;
		// else
		sum += mark;
		n++;
	}
	return (sum/n);
}

int getRegd(){
	int reg;
	printf("Enter regd #:");
	scanf("%d", &reg);
	return reg;
}

int main() {
	int regd;
	char ch = 'n';
	do{
		regd = getRegd();
		printf("Average: %lf", getAverage(regd));
		printf("\nEnter 'y' to continue (or 'n' to quit): ");
		scanf(" %c", &ch);

	} while (ch == 'y');
	printf("\n");
	return 0;
}
