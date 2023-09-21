/*
 * [POINTERS]25 #s entered into array of floats. Count +ve/-ve
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stdio.h>

#define LEN 5

void inputArray(float *p, int length){
	for(int i = 0; i < length; i++){
		printf("Enter #%d: ", i);
		scanf("%f", p++);
	}
}

int main() {
	float floats[LEN];
	float *p = floats;

	inputArray(floats, LEN);

	int nums[] = {0, 0, 0}; // neg, zeroes, pos
	for(int i = 0; i < LEN; i++, p++){
		if (*p > 0) nums[2]++;
		else if (*p == 0) nums[1]++;
		else nums[0]++;
	}
	printf("Positives: %d\nZeroes: %d\nNegatives: %d\n", nums[2], nums[1], nums[0]);
	return 0;
}
