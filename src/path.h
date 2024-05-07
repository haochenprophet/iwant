#ifndef PATH_H
#define PATH_H

#include "object.h"
#include "os.h" //DIR_T

typedef std::list<DIR_T *> NAME_LIST;

namespace n_path {
	class Cpath :public Object
	{
	public:
		NAME_LIST name_list;
	public:
		Cpath();
		~Cpath();
		int push_back (dir_t * dir_name, file_t * file_name, int display = 0);
		int list(DIR_T *dir_name,DIR_T *term=nullptr,int display=1,int to_list=1,int recursive=0);//get list to name_list
		int list(string *dir_name, string *term = nullptr, int display = 1, int to_list = 1, int recursive = 0);//get list to name_list
		int list(wstring *dir_name, wstring *term = nullptr, int display = 1, int to_list = 1, int recursive = 0);//get list to name_list
#if WINDOWS_OS
		int list(char* dir_name, char* term = nullptr, int display = 1, int to_list = 1, int recursive = 0);//get list to name_list
#endif
		int list_s(int display = 1, int to_list = 1, int recursive = 0);//get list to name_list
		int list_ws(int display, int to_list, int recursive = 0);
		int my_clear(void *p=nullptr);
		int display(void *p);
		int display();
		int execute(Object *o); //execute o->execute() 
	};

}
using namespace n_path;

#endif
