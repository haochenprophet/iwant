/* islessequal example */
#include <stdio.h>      /* printf */
#include <math.h>       /* islessequal, log */

int main ()
{
  double result;
  result = log (10.0);

  if (islessequal(result,0.0))
    printf ("log(10.0) is not positive");
  else
    printf ("log(10.0) is positive");

  return 0;
}