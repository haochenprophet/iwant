/* modf example */
#include <stdio.h>      /* printf */
#include <math.h>       /* modf */

int main ()
{
  double param, fractpart, intpart;

  param = 3.14159265;
  fractpart = modf (param , &intpart);
  printf ("%f = %f + %f \n", param, intpart, fractpart);
  return 0;
}