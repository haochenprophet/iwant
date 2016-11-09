/* atan example: atane calculator */
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atof */
#include <math.h>       /* atan */

int main (int argc, char * argv[])
{
	if(argc<2)	printf("atan <value>\n");
	double n,m;
	double pi=3.1415926535;
	n = atof (argv[1]);
	m = atan (n)*180/pi;
	printf ("atan(%f) *180/pi=%f\n" , n, m);
	return 0;
}
