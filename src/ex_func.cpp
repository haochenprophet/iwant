#include "ex_func.h"

int runcmd(void *cmd)
{
	return system((char *)cmd);
}

int time_cmd(void *p)
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];
	time (&rawtime);
	timeinfo = localtime (&rawtime);

	strftime(buffer,80,"%R",timeinfo);
	puts (buffer);
	return 0;
}
