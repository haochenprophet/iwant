/* hypot example */
#include <stdio.h>      /* printf */
#include <math.h>       /* hypot */

int main ()
{
  double leg_x, leg_y, result;
  leg_x = 3;
  leg_y = 4;
  result = hypot (leg_x, leg_y);
  printf ("%f, %f and %f form a right-angled triangle.\n",leg_x,leg_y,result);
  return 0;
}