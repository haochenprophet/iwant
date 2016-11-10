/* nearbyint example */
#include <stdio.h>      /* printf */
#include <fenv.h>       /* fegetround, FE_* */
#include <math.h>       /* nearbyint */

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

  printf ( "nearbyint (2.3) = %.1f\n", nearbyint(2.3) );
  printf ( "nearbyint (3.8) = %.1f\n", nearbyint(3.8) );
  printf ( "nearbyint (-2.3) = %.1f\n", nearbyint(-2.3) );
  printf ( "nearbyint (-3.8) = %.1f\n", nearbyint(-3.8) );
  return 0;
}