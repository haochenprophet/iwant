#ifndef FILE_H
#define FILE_H

#include "myMemory.h"

namespace n_file {
	class Cfile :public CmyMemory
	{
	public:
		string f_name;
	public:
		Cfile();
		int is_exist(char *filename);
		int is_exist();
		int f_append(char *filename,char * ap_str);
		int f_append(char * ap_str);
		int f_read(char *f_name);
		int f_read();
	};

}
using namespace n_file;

#endif
