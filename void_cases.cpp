#include"void_cases.h"


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
