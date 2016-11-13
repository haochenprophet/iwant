/* log1p example */
#include <stdio.h>      /* printf */
#include <math.h>       /* log1p */

int main ()
{
  double param, result;
  param = 1.0;
  result = log1p (param);
  printf ("log1p (%f) = %f.\n", param, result );
  return 0;
}