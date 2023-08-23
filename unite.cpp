#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<cmath>

/*int solve_square ( double a, double b, double c, double x1, double x2, int* i);
int solve_linear (double a, double b, double c, double x1, int* i);
int solve_oneroot (double a, double b, double c, double x1, int* i);
int displays(int i);*/
int solve_square ( double a, double b, double c, double* x1, double* x2, int* i)
{
    double D = b*b - 4*a*c;
    *x1 = (-b + sqrt(D))/(2*a);
    *x2 = (-b - sqrt(D))/(2*a);
    *i = 2;
    return 0;
}


int solve_linear( double a, double b, double c, double* x1, int* i)
{
    if ((a==0) && (b != 0))
    {
        *x1 = (-c/b);
        *i = 1;
    }
    else if ((a==0) && (b == 0))
    {
        printf("error/n");
    }
    else
    {
        printf("D<0");
    }
    return 0;
}
int solve_oneroot (double a, double b, double c, double* x1,int *i)
{
    double D = b*b - 4*a*c;
    *x1=(-b + sqrt(D))/(2*a);
    *i = 1;
    return 0;
}
int displays (double x1,double x2, int i)
{
    if (i == 2)
    {
        printf("%f %f", x1, x2);
    }
    else
    {
        printf("%f", x1);
    }

}
int main ()
{
    double a = NAN, b = NAN, c = NAN, x1 = NAN, x2 = NAN, D=NAN, i = NAN;
    scanf("%lg %lg %lg", &a, &b, &c);
    D = b*b - 4*a*c;
    if ((a !=0) && (D > 0))
    {
        solve_square(a, b, c, x1, x2, i);
    }
    else if ((a !=0) && (D == 0))
    {
        solve_oneroot(a, b, c, x1, i);
    }
    else
    {
        solve_linear(a, b, c, x1, i);
    }
    displays (x1, x2, i);

}
