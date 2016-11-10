/* cbrt example */
#include <stdio.h>      /* printf */
#include <math.h>       /* cbrt */

int main ()
{
  double param, result;
  param = 27.0;
  result = cbrt (param);
  printf ("cbrt (%f) = %f\n", param, result);
  return 0;
}