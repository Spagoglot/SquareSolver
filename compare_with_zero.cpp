.#include "compare_with_zero.h"
#include<math.h>
int compare_with_zero (double x)
{
    double const EPSILON = 1e-9;
    if (fabs(x) < EPSILON) return 0;
    else if (x < EPSILON) return -1;
    else return 1;
}
