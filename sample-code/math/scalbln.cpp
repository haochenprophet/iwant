/* scalbln example */
#include <stdio.h>      /* printf */
#include <float.h>      /* FLT_RADIX */
#include <math.h>       /* scalbn */

int main ()
{
  double param, result;
  long n;

  param = 1.50;
  n = 4L;
  result = scalbln (param , n);
  printf ("%f * %d^%d = %f\n", param, FLT_RADIX, n, result);
  return 0;
}