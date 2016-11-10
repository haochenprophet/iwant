/* lround example */
#include <stdio.h>      /* printf */
#include <math.h>       /* lround */

int main ()
{
  printf ( "lround (2.3) = %ld\n", lround(2.3) );
  printf ( "lround (3.8) = %ld\n", lround(3.8) );
  printf ( "lround (-2.3) = %ld\n", lround(-2.3) );
  printf ( "lround (-3.8) = %ld\n", lround(-3.8) );
  return 0;
}