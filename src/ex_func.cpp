#include "ex_func.h"

int runcmd(void *cmd)
{
	return system((char *)cmd);
}

int time_cmd(void *format)
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	if(format) strftime(buffer,80,(const char*)format,timeinfo);
	else strftime(buffer,80,"%c",timeinfo);

	puts (buffer);
	return 0;
}
