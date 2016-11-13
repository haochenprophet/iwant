/* isgreater example */
#include <stdio.h>      /* printf */
#include <math.h>       /* isgreater, log */

int main ()
{
  double result;
  result = log (10.0);

  if (isgreater(result,0.0))
    printf ("log(10.0) is positive");
  else
    printf ("log(10.0) is not positive");

  return 0;
}