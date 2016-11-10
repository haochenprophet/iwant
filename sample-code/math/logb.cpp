/* logb example */
#include <stdio.h>      /* printf */
#include <math.h>       /* logb */

int main ()
{
  double param, result;
  param = 1024.0;
  result = logb (param);
  printf ("logb (%f) = %f.\n", param, result );
  return 0;
}