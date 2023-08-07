/* AUM SRI SAI RAM
 *
 * Date: 8-07-23 (M)
 * Regd: 211219
 */

#include <stdio.h>

void main(){

	int n; 				// perfect number candidate
	int sum;			// sum of digits
	
	// number input
	printf("Enter number: ");		
	scanf("%d", &n);

	// adding perfect divisors
	for(int i = 1; i < n; i++)
		if (n%i == 0) sum+= i;
	
	if (sum == n) printf("%d is perfect.\n",n);
	else		  printf("%d is not perfect.\n",n);

}

// EXAMPLES
// --------------
// 6 is perfect.
// 28 is perfect.
// 496 is perfect.
