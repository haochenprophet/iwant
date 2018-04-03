#ifndef CODE_H
#define CODE_H

#include "file.h"
#include "path.h"

#define GLOBAL_CLASS "global_class"
#define GLOBAL_CODE "g_code" //global_code
#define EXTERN_KEYWOED "\textern\t"
#define G_CODE_H "#ifndef G_CODE_H\n#define G_CODE_H\n"

namespace n_code {
	class Ccode :public Object
	{
	public:
		string * sp; //string point
		string se;//string extern
		string st;//string template
		string s_cpp_tag;// = ".cpp";
		string s_cpp_rep;// = " ";//not empty, can use space
		Cfile file_h;
		Cfile file_cpp;
	public:
		Ccode();
		~Ccode();
		int my_init(void *p=nullptr);
		int create(char * cp);//cp point class name
		int func(void *p = nullptr);
		int deal_cmd(int argc, char *argv[]);
	};
}

using namespace n_code;

#endif