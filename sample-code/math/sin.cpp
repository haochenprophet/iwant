/* sin example: sine calculator */
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atof */
#include <math.h>       /* sin */

int main (int argc, char * argv[])
{
	if(argc<2)	printf("sin <degrees>\n");
	double n,m;
	double pi=3.1415926535;
	n = atof (argv[1]);
	m = sin (n*pi/180);
	printf ("sin(%f*pi/180) =%f\n" , n, m);
	return 0;
}
