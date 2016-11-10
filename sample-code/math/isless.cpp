/* isless example */
#include <stdio.h>      /* printf */
#include <math.h>       /* isless, log */

int main ()
{
  double result;
  result = log (10.0);

  if (isless(result,0.0))
    printf ("log(10.0) is negative");
  else
    printf ("log(10.0) is not negative");

  return 0;
}