/*
* PURPOSE: A binary (i.e. binary operation on two numbers) calculator
* USAGE: <operator> <number> <number>
*
* AUTHOR: Hursh Gupta
* DATED: 7-24-23
*/


#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    double A,B;
    char op[3];

    printf("Enter Expression: (eg. + 1 2) ");
    scanf("%s %lf %lf", op, &A, &B);

    printf("%ss\n",op);
    printf("Output: ");

    // arithmetic
    if      (!strcmp(op,"+")) printf("%lf", A + B);
    else if (!strcmp(op,"-")) printf("%lf", A - B);
    else if (!strcmp(op,"*")) printf("%lf", A * B);
    else if (!strcmp(op,"/")) printf("%lf", A / B);
    else if (!strcmp(op,"pow")) printf("%lf", pow(A,B));

    // statistical
    else if (!strcmp(op,"avg")) printf("%lf", (A + B)/2);
    else if (!strcmp(op,"min")) printf("%lf", A * (A < B) + B * (B < A));
    else if (!strcmp(op,"max")) printf("%lf", B * (A < B) + A * (B < A));

    // trignometric
    else if (!strcmp(op,"sin")) printf("%lf", sin(A));
    else if (!strcmp(op,"cos")) printf("%lf", cos(A));
    else if (!strcmp(op,"tan")) printf("%lf", tan(A));

    printf("\n");
}




// TAKEAWAYS
// if you enter a 4 digit character for char[3] then we get this error
// *** stack smashing detected ***: terminated
// Aborted (core dumped)

// For string input don't use &op, use op only
// "%s" means that scanf is expecting a pointer to the first element of a char array.
// me is an object array and could be evaluated as pointer. That's why you can use me directly without adding &.
// Adding & to me will be evaluated to 'char (*)[20]' and your scanf is waiting char *