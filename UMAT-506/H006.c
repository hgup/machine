/*
* PURPOSE: A binary calculator
* USAGE: <operator> <number> <number>
*
* AUTHOR: Hursh Gupta
* DATED: 7-24-23
*/


#include <math.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    double A,B;
    char op[3];

    printf("Enter Expression: ");
    scanf("%s %lf %lf", op, &A, &B);
    op = tolower(op);

    printf("Output: ");

    // arithmetic
    if      (op == "+") printf("%lf", A + B);
    else if (op == "-") printf("%lf", A - B);
    else if (op == "*") printf("%lf", A * B);
    else if (op == "/") printf("%lf", A / B);
    else if (op == "pow") printf("%lf", pow(A,B));

    // statistical
    else if (op == "avg") printf("%lf", (A + B)/2);
    else if (op == "min") printf("%lf", A * (A < B) + B * (B < A));
    else if (op == "max") printf("%lf", B * (A < B) + A * (B < A));

    // trigonometric
    else if (op == "sin") printf("%lf", sin(A));
    else if (op == "cos") printf("%lf", cos(A));
    else if (op == "tan") printf("%lf", tan(A));
}


}


// TAKEAWAYS
// if you enter a 4 digit character for char[3] then we get this error
// *** stack smashing detected ***: terminated
// Aborted (core dumped)

// For string input don't use &op, use op only
// "%s" means that scanf is expecting a pointer to the first element of a char array.
// me is an object array and could be evaluated as pointer. That's why you can use me directly without adding &.
// Adding & to me will be evaluated to 'char (*)[20]' and your scanf is waiting char *