/* llrint example */
#include <stdio.h>      /* printf */
#include <fenv.h>       /* fegetround, FE_* */
#include <math.h>       /* llrint */

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

  printf ( "llrint (2.3) = %lld\n", llrint(2.3) );
  printf ( "llrint (3.8) = %lld\n", llrint(3.8) );
  printf ( "llrint (-2.3) = %lld\n", llrint(-2.3) );
  printf ( "llrint (-3.8) = %lld\n", llrint(-3.8) );
  return 0;
}