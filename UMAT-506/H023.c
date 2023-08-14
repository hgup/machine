/*
 * Average of atmost n +ve integers, input <= 0 then display average
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>

int main() {
	int n;
	printf("Enter max # of inputs: ");
	scanf("%d",&n);
	
	int in, sum = 0, i = 0;
	do {
		
		scanf("%d", &in);
		if(in <= 0) break;

		sum += in;
		i++;
	} while (i < n); // end case: i = n (number of terms);
	
	if (i != 0)
		printf("Average: %5.2f\n", sum*1.0/i);
	else
		printf("Average not defined on zero numbers\n");

	return 0;
}
