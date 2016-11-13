/* isunordered example */
#include <stdio.h>      /* printf */
#include <math.h>       /* isunordered, sqrt */

int main ()
{
  double result;
  result = sqrt (-1.0);

  if (isunordered(result,0.0))
    printf ("sqrt(-1.0) and 0.0 cannot be ordered");
  else
    printf ("sqrt(-1.0) and 0.0 can be ordered");

  return 0;
}