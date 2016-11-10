/* exp2 example */
#include <stdio.h>      /* printf */
#include <math.h>       /* exp2 */

int main ()
{
  double param, result;
  param = 8.0;
  result = exp2 (param);
  printf ("2 ^ %f = %f.\n", param, result );
  return 0;
}