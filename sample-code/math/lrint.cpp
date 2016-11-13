/* lrint example */
#include <stdio.h>      /* printf */
#include <fenv.h>       /* fegetround, FE_* */
#include <math.h>       /* lrint */

int main ()
{
  printf ("rounding using ");
  switch (fegetround()) {
    case FE_DOWNWARD: printf ("downward"); break;
    case FE_TONEAREST: printf ("to-nearest"); break;
    case FE_TOWARDZERO: printf ("toward-zero"); break;
    case FE_UPWARD: printf ("upward"); break;
    default: printf ("unknown");
  }
  printf (" rounding:\n");

  printf ( "lrint (2.3) = %ld\n", lrint(2.3) );
  printf ( "lrint (3.8) = %ld\n", lrint(3.8) );
  printf ( "lrint (-2.3) = %ld\n", lrint(-2.3) );
  printf ( "lrint (-3.8) = %ld\n", lrint(-3.8) );
  return 0;
}