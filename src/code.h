#ifndef CODE_H
#define CODE_H

#include "file.h"
#include "path.h"

#define GLOBAL_CLASS "global_class"
#define GLOBAL_CODE "g_code" //global_code
#define GLOBAL_CODE_H "g_code.h"
#define GLOBAL_CODE_I "g_code.i" //include file
#define GLOBAL_CODE_FUNC_I "g_code_func.i" //include function file
#define EXTERN_KEYWOED "\textern\t"
#define G_CODE_H_DEFINE "#ifndef G_CODE_H\n#define G_CODE_H\n"
#define G_CODE_I_DEFINE "#ifndef G_CODE_I\n#define G_CODE_I\n"
#define G_CODE_FUNC_I_DEFINE "#ifndef G_CODE_FUNC_I\n#define G_CODE_FUNC_I\n"

namespace n_code {
	enum class CodeAtcion {
		create_h = BIT0,
		create_c = BIT1,
		create_func =BIT2,
	};

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
		Cfile file_func;//function
	public:
		Ccode();
		~Ccode();
		int my_init(void *p=nullptr);
		int init_file(char * url=nullptr);//url point target path
		int create_action(void *p);
		int func(void *p = nullptr);
		int create(char * cp);//cp point class name
		void create_head();
		void create_tail();
		int create_cmd(int argc, char *argv[]);
		int deal_cmd(int argc, char *argv[]);
		int help(void *p = nullptr);
	};
}

using namespace n_code;

#endif
