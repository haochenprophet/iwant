/* lgamma example */
#include <stdio.h>      /* printf */
#include <math.h>       /* lgamma */

int main ()
{
  double param, result;
  param = 0.5;
  result = lgamma (param);
  printf ("lgamma(%f) = %f\n", param, result );
  return 0;
}