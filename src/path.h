#ifndef PATH_H
#define PATH_H

#include "object.h"
#include "os.h" //DIR_T

typedef list<DIR_T *> NAME_LIST;

namespace n_path {
	class Cpath :public Object
	{
	public:
		NAME_LIST name_list;
	public:
		Cpath();
		~Cpath();
		int list(DIR_T *dir_name,DIR_T *term=nullptr,int display=1,int to_list=1);//get list to name_list
		int my_clear(void *p=nullptr);
		int display(void *p=nullptr);
		int execute(MyFunc func=nullptr, void *p = nullptr, bool new_thread = false); //execute input func 
	};

}
using namespace n_path;

#endif
