/* frexp example */
#include <stdio.h>      /* printf */
#include <math.h>       /* frexp */

int main ()
{
	double param, result;
	int n;

	param = 8.0;
	result = frexp (param , &n);
	printf ("%f = %f * 2^%d\n", param, result, n);
	return 0;
}