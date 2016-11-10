/* expm1 example */
#include <stdio.h>      /* printf */
#include <math.h>       /* expm1 */

int main ()
{
  double param, result;
  param = 1.0;
  result = expm1 (param);
  printf ("expm1 (%f) = %f.\n", param, result );
  return 0;
}