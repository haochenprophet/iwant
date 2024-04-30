#ifndef COLLECT_FILE_H
#define COLLECT_FILE_H

#include "../object.h"

namespace n_collect_file {
	class Ccollect_file :public Object
	{
	public:
		Ccollect_file();
		~Ccollect_file();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccollect_file); }
	};
}

using namespace n_collect_file;

#endif
