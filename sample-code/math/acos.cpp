/* acos example: acose calculator */
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atof */
#include <math.h>       /* acos */

int main (int argc, char * argv[])
{
	if(argc<2)	printf("acos <value>\n");
	double n,m;
	double pi=3.1415926535;
	n = atof (argv[1]);
	m = acos (n)*180/pi;
	printf ("acos(%f) *180/pi=%f\n" , n, m);
	return 0;
}
