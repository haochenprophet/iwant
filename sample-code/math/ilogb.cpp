/* ilogb example */
#include <stdio.h>      /* printf */
#include <math.h>       /* ilogb */

int main ()
{
  double param;
  int result;

  param = 10.0;
  result = ilogb (param);
  printf ("ilogb(%f) = %d\n", param, result);
  return 0;
}