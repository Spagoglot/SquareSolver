#include "get_coeffs.h"
//count_of_roots nRoots = ZERO_ROOTS;

void skip_line();
void skip_line()
{
	int z = 0;
	do {
		z = getchar();
	   }
    while (z != '\n' && z != EOF);
}

int get_coeffs (double *a_ptr, double *b_ptr, double *c_ptr) /*get_coeffs*/
{
    printf("Hi. Enter a, b and c with space within: \n");

    while (scanf("%lg %lg %lg", a_ptr, b_ptr, c_ptr) != 3)
    {
        //*nRoots = DEFAULT;
        printf("enter new numbers:");
        skip_line ();
    }
    return 0;
}
