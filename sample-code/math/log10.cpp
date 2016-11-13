/* log10 example: log10e calculator */
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atof */
#include <math.h>       /* log10 */

int main (int argc, char * argv[])
{
	if(argc<2)	printf("log10 <value>\n");
	double param,result;
	param = atof (argv[1]);
	result = log10 (param);
	printf ("log10(%f) =%f\n" , param, result);
	return 0;
}
