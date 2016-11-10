/* fmin example */
#include <stdio.h>      /* printf */
#include <math.h>       /* fmin */

int main ()
{
  printf ("fmin (100.0, 1.0) = %f\n", fmin(100.0,1.0));
  printf ("fmin (-100.0, 1.0) = %f\n", fmin(-100.0,1.0));
  printf ("fmin (-100.0, -1.0) = %f\n", fmin(-100.0,-1.0));
  return 0;
}