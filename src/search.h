#ifndef SEARCH_H
#define SEARCH_H

#include "object.h"

namespace n_search {
	class Csearch :public Object
	{
	public:
		Csearch();
		int my_init(void *p=nullptr);
		static char * searchString(char string[],char *start,char *end,int retStart=0);
		static char * searchString(char string[],char *start,long  end,int retStart=0);
		static void get_next(char *t,int *next);
		static char * searchKmp(char *start,char *str,long len,int retStart=1);
	};
}

using namespace n_search;

#endif
