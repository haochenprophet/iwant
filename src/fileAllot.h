#ifndef FILEALLOT_H
#define	FILEALLOT_H

#include "object.h"

namespace n_fileAllot {
	class CfileMem
	{
	public:
		CfileMem();
		void clear();
		char * start;
		char * current;
		char * end;
		size_t file_size;
		size_t read_size;
		bool empty;
	};

	class CfileAllot :public Object
	{
	public:
		CfileMem file_m;
		CfileAllot();
		CfileAllot(char * fname);
		CfileAllot(FILE * fp);
		~CfileAllot();
		int my_init(void *p=nullptr);
		void clear();
		void clear(CfileMem * p);
		long allot(FILE *fp, CfileMem * p);
		long allot(char *fname, CfileMem * p);
		long allot(char *fname);
		long allot(FILE * fp);
		long fsize(FILE *fp);
		void display(CfileMem *p, int binary = 0);
		void display(int binary = 0);
		void display(char *cp, int count, int binary = 0);
		int token(const char *delimit);//token the allot buf
		int token();//"\n\r"
		void freeMe(CfileMem *p);
		void freeMe();
	};
}
using namespace n_fileAllot;
#endif
