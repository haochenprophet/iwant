#ifndef CODE_H
#define CODE_H

#include "file/file.h"
#include "path/path.h"
#include "code_action.h"

#define GLOBAL_CLASS "global_class"
#define GLOBAL_CODE "g_code" //global_code
#define GLOBAL_CODE_H "g_code.h"
#define GLOBAL_CODE_I "g_code.i" //include file
#define GLOBAL_CODE_FUNC_I "g_code_func.i" //include function file
#define GLOBAL_CODE_FUNC_I_PACKAGE "%s_g_code_func.i"
#define EXTERN_KEYWOED "\textern\t"
//default pacakage
#define G_CODE_H_DEFINE "#ifndef G_CODE_H\n#define G_CODE_H\n"
#define G_CODE_I_DEFINE "#ifndef G_CODE_I\n#define G_CODE_I\n"
#define G_CODE_FUNC_I_DEFINE "#ifndef G_CODE_FUNC_I\n#define G_CODE_FUNC_I\n"
#define G_CODE_ALL_H "\t#include \"all/all_h_include.h\"\n"
#define G_CODE_ADD_OBJECT "void add_objects(Object *p)\n{\n"
#define G_CODE_ADD_OBJECT_H "\tvoid add_objects(Object *p);\n"
//set_package
#define G_CODE_H_DEFINE_PACKAGE "#ifndef %s_G_CODE_H\n#define %s_G_CODE_H\n"
#define G_CODE_I_DEFINE_PACKAGE "#ifndef %s_G_CODE_I\n#define %s_G_CODE_I\n"
#define G_CODE_FUNC_I_DEFINE_PACKAGE "#ifndef %s_G_CODE_FUNC_I\n#define %s_G_CODE_FUNC_I\n"
#define G_CODE_ALL_H_PACKAGE "\t#include \"%s_all_h_include.h\"\n"
#define G_CODE_ADD_OBJECT_PACKAGE "void %s_add_objects(Object *p)\n{\n"
#define G_CODE_ADD_OBJECT_H_PACKAGE "\tvoid %s_add_objects(Object *p);\n"


#define CODE_BUF_LEN (4*1024)//4k 1 memory page
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
		Cfile file_func;//function
		char *code_buf;
	public:
		Ccode();
		~Ccode();
		int my_init(void *p=nullptr);
		int init_file(char * url=nullptr);//url point target path
		int set_package_action(void *p = nullptr);
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
