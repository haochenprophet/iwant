#include "ex_func.h"
#include "object.h"

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

int rename_cmd(void * p_Cparameter) //point calss Cparameter 
{
	Cparameter *p=(Cparameter *)p_Cparameter;

	if(NULL==p->in||NULL==p->out)
	{
		cout<<"error:rename_cmd->if(NULL==p->in||NULL==p->out)\n";
		return -1;
	} 
	
	return rename((char *)p->in,(char *)p->out);
}
