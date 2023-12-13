#include "cmd.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
//[Usage]: sudo ./io <action> <address/Index_port> [data/index] [data_port] [data]
argv[0]  ./io
argv[1]  action
argv[2]  - argv [n]  int 
*/
    int Ccmd::analyze(int argc,char ** argv)
    {
    	int i,n;
    	char * endptr;
    	if(argc<3) return -1; //error

    	for(i=2,n=0;i<argc&& n<BUF_LEN ;i++,n++)
    	{
	         if(argv[i][0]=='0'&&(argv[i][1]=='x'||argv[i][1]=='X'))
	        {
	            this->buf[n]=strtol(argv[i],&endptr,16);
	        }
	        else
	        {
	            this->buf[n]=strtol(argv[i],&endptr,10);
	        }
	        //printf("buf[%d]=%d\n",n,this->buf[n]);//test ok
    	}

    	return 0;
    }

