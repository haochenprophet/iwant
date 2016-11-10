/* atanh example */
#include <stdio.h>      /* printf */
#include <math.h>       /* tanh, atanh */

int main ()
{
	double param, result;
	param = tanh(1);
	result = atanh(param) ;
	printf ("The area hyperbolic tangent of %f is %f.\n", param, result);
	return 0;
}