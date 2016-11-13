/* asin example: asine calculator */
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atof */
#include <math.h>       /* asin */

int main (int argc, char * argv[])
{
	if(argc<2)	printf("asin <value>\n");
	double n,m;
	double pi=3.1415926535;
	n = atof (argv[1]);
	m = asin (n)*180/pi;
	printf ("asin(%f) *180/pi=%f\n" , n, m);
	return 0;
}
