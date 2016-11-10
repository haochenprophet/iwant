/* tgamma example */
#include <stdio.h>      /* printf */
#include <math.h>       /* tgamma */

int main ()
{
  double param, result;
  param = 0.5;
  result = tgamma (param);
  printf ("tgamma(%f) = %f\n", param, result );
  return 0;
}