#ifndef FILE_H
#define FILE_H

#include "object.h"

namespace n_file {
	class Cfile :public Object
	{
	public:
		string f_name;
	public:
		Cfile();
		int is_exist(char *filename);
		int is_exist();
		int f_append(char *filename,char * ap_str);
		int f_append(char * ap_str);
	};

}
using namespace n_file;

#endif
