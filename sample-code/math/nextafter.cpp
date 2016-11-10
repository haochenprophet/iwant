/* nextafter example */
#include <stdio.h>      /* printf */
#include <math.h>       /* nextafter */

int main ()
{
  printf ("first representable value greater than zero: %e\n", nextafter(0.0,1.0));
  printf ("first representable value less than zero: %e\n", nextafter(0.0,-1.0));
  return 0;
}