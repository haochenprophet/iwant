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

int wait_char_abcd(void * cp)
{
	int c=0;

	while(1)
	{
		c=getchar();
		if(c=='A'||c=='a')	return 1;
		if(c=='B'||c=='b')	return 2;
		if(c=='C'||c=='c')	return 3;
		if(c=='D'||c=='d')	return 4;
		if(c=='Q'||c=='q')	exit(0);		
		//cout<<"press: A B C D for select.\n";
	}
	return 0;
}
