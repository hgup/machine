/*
 * Generate prime numbers from 1 to 100 (Process: Sieve of Eratostenes)
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>

#define LEN 100

void genPrimeSOE(int nums[], int length){
	for(int i = 2; i < length; i++)
	{
		if (nums[i] != 0)							// non zero entry
			for(int j = 2*i; j < length; j += i)	// multiples (starting from 2x)
				nums[j] = 0;						// set them to zero
				
	}
}


int main() {
	
	int nums[LEN];

	for(int i =0; i < LEN; i++)						// create array
		nums[i] = i;
	
	genPrimeSOE(nums, LEN);

	printf("PRIME NUMBERS from 1 to %d:\n", LEN);
	
	for(int i = 0; i < LEN; i++)
		if (nums[i] != 0) printf("%d\n",nums[i]);

	return 0;
}


// NOTE: Sieve of Eratostenes
	// a) Fill an array of num[100] with numbers from 1 to 100
	// b) Starting with the 2nd entity in array, set its all multiples to zero.
	// c) Proceed to the next non-zero element and set all its multiples to zero.
	// d) Repeat step 3 till you have set up the multiples of all the non-zero elements to zero.
	// e) At the end of step4, all the non-zero entries left in the array would be prime numbers, so print out the numbers.
