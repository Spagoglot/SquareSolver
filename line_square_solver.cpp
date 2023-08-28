#include"line_square_solver.h"
#include "compare_with_zero.h"
#include<math.h>


// int compare_with_zero (double x)
// {
//     double const EPSILON = 1e-9;
//     if (fabs(x) < EPSILON) return 0;
//     else if (x < EPSILON) return -1;
//     else return 1;
// }


int LinearSolver ( struct coefs* aboba, count_of_roots *nRoots) /*LinearSolver*/
{
    double b = aboba->b;
    double c = aboba->c;
    double x1 = aboba->x1;
    if (compare_with_zero (b) != 0)
    {
        x1 = -c / b;
        *nRoots = ONE_ROOT;
    }
    else
    {
        if (compare_with_zero (c) == 0)
        {
            *nRoots = INF_ROOTS;
        }
        else
        {
            *nRoots = ZERO_ROOTS;
        }
    }
    return 0;
}

void SquareSolver (struct coefs* aboba, count_of_roots *nRoots) /*int SquareSolver*/
{
    double a= aboba->a;
    double b= aboba->b;
    double c= aboba->c;
    double x1=aboba->x1;
    double x2=aboba->x2;
    double D = b*b-4*a*c;

    if (compare_with_zero (D) == -1)
    {
        *nRoots = ZERO_ROOTS;

        return;
    }
        double sqrt_D = sqrt(D);

        if (compare_with_zero (D) == 0 )
    {
        x1 = x2 = -b / (2 * a);
        *nRoots = ONE_ROOT;
    }
    if (compare_with_zero (D) == 1 )
    {
        x1= (-b + sqrt_D) / (2 * a);
        x2= (-b - sqrt_D) / (2 * a);
        *nRoots = TWO_ROOTS;
    }
}
