/* erf example */
#include <stdio.h>      /* printf */
#include <math.h>       /* erf */

int main ()
{
  double param, result;
  param = 1.0;
  result = erf (param);
  printf ("erf (%f) = %f\n", param, result );
  return 0;
}