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
typedef list<void *> NAME_LIST;

namespace n_path {
	class Cpath :public Object
	{
	public:
		Cpath();
		~Cpath();
		bool is_dir(DIR_T *name);
		bool is_file();
		int list(DIR_T *dir_name,DIR_T *term=NULL);//get list to name_list
	};

}
using namespace n_path;

#endif
