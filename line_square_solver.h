#pragma once
enum count_of_roots
{
    ZERO_ROOTS = 0,
    ONE_ROOT = 1,
    TWO_ROOTS = 2,
    INF_ROOTS = 3
};

struct coefs
{
    double a;
    double b;
    double c;
    double x1;
    double x2;
};

int LinearSolver ( struct coefs *aboba, count_of_roots *nRoots);
void SquareSolver (struct coefs *aboba, count_of_roots *nRoots);







