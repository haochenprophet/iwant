/* remquo example */
#include <stdio.h>      /* printf */
#include <math.h>       /* remquo */

int main ()
{
  double numer = 10.3;
  double denom = 4.5;
  int quot;
  double result = remquo (numer,denom,&quot);
  printf ("numerator: %f\n", numer);
  printf ("denominator: %f\n", denom);
  printf ("remainder: %f\n", result);
  printf ("quotient: %d\n", quot);
  return 0;
}