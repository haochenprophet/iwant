/* fdim example */
#include <stdio.h>      /* printf */
#include <math.h>       /* fdim */

int main ()
{
  printf ("fdim (2.0, 1.0) = %f\n", fdim(2.0,1.0));
  printf ("fdim (1.0, 2.0) = %f\n", fdim(1.0,2.0));
  printf ("fdim (-2.0, -1.0) = %f\n", fdim(-2.0,-1.0));
  printf ("fdim (-1.0, -2.0) = %f\n", fdim(-1.0,-2.0));
  return 0;
}