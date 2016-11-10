/* erfc example */
#include <stdio.h>      /* printf */
#include <math.h>       /* erfc */

int main ()
{
  double param, result;
  param = 1.0;
  result = erfc (param);
  printf ("erfc(%f) = %f\n", param, result );
  return 0;
}