/* nexttoward example */
#include <stdio.h>      /* printf */
#include <math.h>       /* nexttoward */

int main ()
{
  printf ("first representable value greater than zero: %e\n", nexttoward(0.0,1.0L));
  printf ("first representable value less than zero: %e\n", nexttoward(0.0,-1.0L));
  return 0;
}