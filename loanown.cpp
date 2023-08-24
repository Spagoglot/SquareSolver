#include <stdio.h>
#include <cmath> //inputting packages
#include <math.h>

static int compare_with_zero (double x);
enum count_of_roots {ZERO_ROOTS = 0, ONE_ROOT = 1, TWO_ROOTS = 2,INF_ROOTS = 3, DEFAULT = 4};
int get_coeffs (double *a, double *b, double *c, int * nRoots);
int LinearSolver ( const double b, const double c, double * x1, double * x2, int *nRoots);
int SquareSolver (const double a, const double b, const double c, double * x1, double * x2, int *nRoots);
int cases (double x1,double x2,int nRoots);

int main() /*main*/
{
double a = NAN, b = NAN, c = NAN;
double x1 = NAN, x2 =NAN;
double a_ptr=NAN, b_ptr=NAN, c_ptr=NAN;
int nRoots = 0;

get_coeffs ( &a, &b, &c, &nRoots);
if (!scanf("%lg %lg %lg", a_ptr, b_ptr, c_ptr))
{
}
else
{
if (compare_with_zero (a) == 0)
LinearSolver ( b, c, &x1, &x2, &nRoots);
else
SquareSolver ( a, b, c, &x1, &x2, &nRoots);
}
cases ( x1, x2, nRoots);
}

int get_coeffs (double *a_ptr, double *b_ptr, double *c_ptr, int * nRoots) /*get_coeffs*/
{
printf("Hi. Enter a, b and c with space within: \n");
scanf("%lg %lg %lg", a_ptr, b_ptr, c_ptr);

if (!scanf("%lg %lg %lg", a_ptr, b_ptr, c_ptr))
{
*nRoots = DEFAULT;
}
return 0;
}

int compare_with_zero (double x)
{
double const EPSILON = 1e-9;
if (fabs(x) < EPSILON) return 0;
else if (x < EPSILON) return -1;
else return 1;
}

int LinearSolver ( const double b, const double c, double * x1, double * x2, int *nRoots) /*LinearSolver*/
{

if (compare_with_zero (b) != 0)
{
*x1 = -c / b;
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

int SquareSolver (const double a, const double b, const double c, double * x1, double * x2, int *nRoots) /*int SquareSolver*/
{
double D = b*b-4*a*c;

if (compare_with_zero (D) == -1)
{
*nRoots = ZERO_ROOTS;
}
double sqrt_D = sqrt(D);

if (compare_with_zero (D) == 0 )
{
*x1 = *x2 = -b / (2 * a);
*nRoots = ONE_ROOT;
}
if (compare_with_zero (D) == 1 )
{
*x1= (-b + sqrt_D) / (2 * a);
*x2= (-b - sqrt_D) / (2 * a);
*nRoots = TWO_ROOTS;
}
}

int cases ( double x1, double x2, int nRoots) /*int cases*/
{
switch(nRoots) /*switch(nRoots)*/
{
case ZERO_ROOTS: { printf("NO roots"); }
break;

case ONE_ROOT: { printf("There is one root x1 = %lg", x1); }
break;

case TWO_ROOTS: { printf("There are two x1 = %lg, x2 = %lg", x1, x2); }
break;

case INF_ROOTS: { printf("Thert is infifnite count of roots."); }
break;

case DEFAULT: { printf("Invalide input."); }
}

}
