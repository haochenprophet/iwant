#include"unistd.h"
#include"sys/types.h"
#include"fcntl.h"
#include"dirent.h"
#include"stdio.h"

#ifndef NULL
	#define NULL 0
#endif

#ifndef ERROR
	#define ERROR 0
	#define OK 1
#endif

typedef int Status;
Status ls(char *);

int main(int argc,char **argv)
{
	if(argc==1) ls((char*)".");
	//else
	while(--argc)
	{
		printf("%s\n",*++argv);
		ls(*argv);
	}
}



Status ls(char *dirname)
{
	DIR *p_dir;
	struct dirent *p_dirent;
	if((p_dir=opendir(dirname))==NULL)
	{
		fprintf(stderr,"---->can\'t open %s\n",dirname);
		return ERROR;
	}
	while((p_dirent=readdir(p_dir)))
	{
		printf("%s\n",p_dirent->d_name);
	}
	closedir(p_dir);
	return OK;
}