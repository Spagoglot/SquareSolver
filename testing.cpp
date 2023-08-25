#include <stdio.h>
 //inputting packages
#include <math.h>
#include "get_coeffs.h"
#include "line_square_solver.h"
#include "compare_with_zero.h"




void cases (double x1,double x2,count_of_roots nRoots);

int main() /*main*/
{
    double a = NAN, b = NAN, c = NAN;
    double x1 = NAN, x2 =NAN;
    double a_ptr=NAN, b_ptr=NAN, c_ptr=NAN;
    count_of_roots nRoots = ZERO_ROOTS;

    get_coeffs (&a, &b, &c);
            if (compare_with_zero (a) == 0)
            LinearSolver ( b, c, &x1, &x2, &nRoots);
            else
            SquareSolver ( a, b, c, &x1, &x2, &nRoots);
        cases ( x1, x2, nRoots);

}


void cases ( double x1, double x2, count_of_roots nRoots) /*int cases*/
{
    switch(nRoots) /*switch(nRoots)*/
    {
        case ZERO_ROOTS:
        {
            printf("NO roots");
            break;
        }

        case ONE_ROOT:
        {
            printf("There is one root x1 = %lg", x1);
            break;
        }
        case TWO_ROOTS:
        {
            printf("There are two x1 = %lg, x2 = %lg", x1, x2);
            break;
        }

        case INF_ROOTS:
        {
            printf("Thert is infifnite count of roots.");
            break;
        }

    }

}
