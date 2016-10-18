
#ifndef	ALLOTMEM_H
#define	ALLOTMEM_H

#ifndef ALLOTMEM_DEBUG
#define	ALLOTMEM_DEBUG 0//1
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef	 YES
#define YES 0xAA
#endif

#ifndef	NO
#define NO  0
#endif
//#include "../object/object.h"
class AllotFileMem//:public Object
{
public:
	AllotFileMem();
	char * start;
	char *current;
	char * end;
	long fileSize;
	long readSize;
	long fileEmpty;
};

class CAllotMem//:public Object
{ 
public:
	AllotFileMem allot;
	CAllotMem();
	CAllotMem(char * cpFileName);
	CAllotMem(FILE * fp);
	~CAllotMem();
	void clear();
	void clear(AllotFileMem * p);
	long allotFileMemory(FILE *fp,AllotFileMem * p);
	long allotFileMemory(char *cpFileName,AllotFileMem * p);
	long allotFileMemory(char *cpFileName);
	long allotFileMemory(FILE * fp);
	long checkFileSize(FILE *fp);
	void display(AllotFileMem *p);
	void display();
	int token(const char *strDelimit);//token the allot buf
	int token();//"\n\r"
	void freeAllot(AllotFileMem *p);
	void freeAllot();
};
#endif
