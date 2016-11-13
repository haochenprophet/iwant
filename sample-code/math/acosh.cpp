/* acosh example */
#include <stdio.h>      /* printf */
#include <math.h>       /* acosh, exp, sinh */

int main ()
{
	double param, result;
	param = exp(2) - sinh(2);
	result = acosh(param) ;
	printf ("The area hyperbolic cosine of %f is %f radians.\n", param, result);
	return 0;
}