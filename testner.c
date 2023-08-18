#include<stdio.h>
#include<math.h>
int main ()
{
float x1,x2,a,b,c,D;
scanf("%f %f  %f",&a,&b,&c);
    if (a==0)
        {printf("it's not square");}
    else
        {D=b*b-4*a*c;
    if (D>=0) {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
            if (x1==x2)
                {printf("x1=%f\n",x1);}
            else {printf("x1=%f\n",x1);
                    printf("x2=%f\n",x2);}}
    else printf("D<0");
return 0;
}
}
