#include<stdio.h>
#include<math.h>

int main()
{
    float a=NAN,b=NAN,c=NAN,D=NAN,x1=NAN,x2=NAN;
    scanf("%f %f %f", &a, &b, &c);
    if ((a==0) && (b==0))
    {
    printf("error");
    }
    else if ((a==0) && (b!=0))
    {
        printf("x1=%f\n", x1=-c/b);
    }
    else
    {
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    if ((b==0) && (c<0) && (a>0))
    {
    printf("x1=%f", x1=sqrt(-c/a));
    printf("x2=%f", x2=-sqrt(-c/a));
    }
    else if ((b==0) && (c>0) && (a>0))
    {
    printf("error");
    }
    else if ((b==0) && (c>0) && (a<0))
    {
    printf("x1=%f", x1=sqrt(-c/a));
    printf("x2=%f", x2=-sqrt(-c/a));
    }
    else if ((b==0) && (c<0) && (a<0))
    {
    printf("error");
    }
    else if (b*b-4*a*c > 0)
    {
    printf("x1=%f",x1);
    printf("x2=%f",x2);
    }
    else if (b*b-4*a*c == 0)
    {
    printf("x1=%f",x1);
    }
    else
    {
    printf("D<0");
    }
    }
}
