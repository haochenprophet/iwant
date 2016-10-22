#ifndef FILE_CUT_H
#define FILE_CUT_H
#include "AllotMEM.h"

class CfileCut:public CAllotMem
{
public:
	int cut(char *file,long start=0,long size=-1,char *out_file="file.out");
};


#endif
