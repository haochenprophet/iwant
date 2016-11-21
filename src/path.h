#ifndef PATH_H
#define PATH_H

#include "object.h"
#include "os.h"

typedef list<void *> NAME_LIST;


namespace n_path {
	class Cpath :public Object
	{
	public:
		Cpath();
		~Cpath();
		bool is_dir();
		bool is_file();
		int list(DIR_T *dir_name);//get list to name_list
	};

}
using namespace n_path;

#endif
