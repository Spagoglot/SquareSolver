#include <stdio.h>
 //inputting packages
#include <math.h>
#include "get_coeffs.h"
#include "line_square_solver.h"
#include "compare_with_zero.h"
#include "void_cases.h"


int main() /*main*/
{
    struct coefs coef = {.a=NAN, .b=NAN, .c=NAN, .x1=NAN, .x2=NAN};
    double a_ptr=NAN, b_ptr=NAN, c_ptr=NAN;
    count_of_roots nRoots = ZERO_ROOTS;

    get_coeffs (&coef.a, &coef.b, &coef.c);
    if (compare_with_zero (coef.a) == 0)
        LinearSolver ( &coef, &nRoots);
    else
        SquareSolver ( &coef, &nRoots);
    cases ( &coef, nRoots);

}
