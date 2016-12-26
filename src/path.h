#ifndef PATH_H
#define PATH_H

#include "object.h"
#include "os.h"

#if WINDOWS_OS
typedef TCHAR DIR_T;//for class Cpath
#endif//WINDOWS_OS

#if LINUX_OS
typedef char DIR_T;
#endif//LINUX_OS
typedef list<DIR_T *> NAME_LIST;

namespace n_path {
	class Cpath :public Object
	{
	public:
		NAME_LIST name_list;
	public:
		Cpath();
		~Cpath();
		bool is_dir(DIR_T *name);
		bool is_file();
		int list(DIR_T *dir_name,DIR_T *term=NULL,int display=1,int to_list=1);//get list to name_list
		int my_clear(void *p=nullptr);
		int display(void * p=NULL);
	};

}
using namespace n_path;

#endif
