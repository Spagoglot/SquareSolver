enum count_of_roots
{
    ZERO_ROOTS = 0,
    ONE_ROOT = 1,
    TWO_ROOTS = 2,
    INF_ROOTS = 3
};

int LinearSolver ( const double b, const double c, double * x1, double * x2, count_of_roots *nRoots);
void SquareSolver (const double a, const double b, const double c, double * x1, double * x2, count_of_roots *nRoots);







