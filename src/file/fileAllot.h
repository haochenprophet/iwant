#ifndef FILEALLOT_H
#define	FILEALLOT_H

#include "object/object.h"

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
		CfileMem file_m;//file memory map
		CfileAllot();
		CfileAllot(char * fname);
		CfileAllot(FILE * fp);
		~CfileAllot();
		int my_init(void *p=nullptr);
		void clear();
		void clear(CfileMem * p);
		int allot(FILE *fp, CfileMem * p);
		int allot(char *fname, CfileMem * p);
		int allot(char *fname);
		int allot(FILE * fp);
		size_t fsize(FILE *fp);
		void display(CfileMem *p, bool binary = false);
		void display(bool binary = false);
		void display(char *cp, size_t count, bool binary = false);
		int token(const char *delimit);//token the allot buf
		int token();//"\n\r"
		void freeMe(CfileMem *p);
		void freeMe();
	};
}
using namespace n_fileAllot;
#endif
