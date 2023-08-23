#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<cmath>
double two_solver(double a, double b, double c, double x1, double  x2);//два решения
double one_solver(double a, double b, double x1);//нет решений
void zero_solver(void);// D<0
double two_solver_good(double a, double b, double c, double x1, double  x2);// b=0 sqrt(-c/a>0)
void two_solver_bad(void);// b=0 sqrt(-c/a<0)
double cx_solver(double b, double c, double x1);
void no_solver(void);

double two_solver(double a, double b, double c, double x1, double  x2)
{
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("%lg %lg", x1, x2);
    return 0;
}

double one_solver(double a, double b, double x1)
{
    x1=-b/(2*a);
    printf("%lg",x1);
    return(0);
}

void zero_solver(void)
{
    printf("Error/n");
}

double two_solver_good(double a, double b, double c, double x1, double  x2)
{
    x1 = sqrt(-c/a);
    x2 = -sqrt(-c/a);
    printf("%lg %lg", x1, x2);
    return(0);
}

void two_solver_bad(void)
{
    printf("Error/n");
}

double cx_solver(double b, double c, double x1)
{
    x1=-c/b;
    printf("%lg", x1);
    return(0);
}

void no_solver(void)
{
    printf("no solutions/n");
}

int main ()
{
    double a= NAN, b= NAN, c= NAN, x1= NAN, x2= NAN;
    scanf("%lg %lg %lg", &a , &b, &c);
    if ((a==0) && (b==0))
    {
    zero_solver();
    }
    else if ((a==0) && (b!=0))
    {
    cx_solver(b, c, x1);
    }
    else if ((b==0) && (c*a>0))
    {
    two_solver_bad();
    }
    else if ((b==0) && (c*a < 0))
    {
    two_solver_good(a, b, c, x1, x2);
    }
    else if (b*b - 4*a*c > 0)
    {
    two_solver(a,b,c,x1,x2);
    }
    else if (b*b - 4*a*c == 0)
    {
    one_solver(a,b,x1);
    }
    else
    {
    no_solver();
    }

}
