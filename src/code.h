#ifndef CODE_H
#define CODE_H

#include "file.h"
#include "path.h"

#define GLOBAL_CLASS "global_class"

namespace n_code {
	class Ccode :public Cfile
	{
	public:
		string * sp; //string point
		string s_cpp_tag;// = ".cpp";
		string s_cpp_rep;// = " ";//not empty, can use space
	public:
		Ccode();
		~Ccode();
		int my_init(void *p=nullptr);
		int create(char * cp);//cp point class name
		int func(void *p = nullptr);
	};
}

using namespace n_code;

#endif
