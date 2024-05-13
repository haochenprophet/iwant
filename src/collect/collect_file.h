#ifndef COLLECT_FILE_H
#define COLLECT_FILE_H

#include "../object.h"
#include "../path.h"
#include "file/file.h"

namespace n_collect_file {
	class Ccollect_file : public Cfile
	{
	public:
		dir_t  * to_dir;
		dir_t  * from_dir;
		file_t * term;

	public:
		Ccollect_file();
		~Ccollect_file();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccollect_file); }
	public:
		int func(void* p);
		int collect(dir_t * dir = nullptr , file_t * term = nullptr , dir_t* to_dir = nullptr, Object* obj_fun = nullptr);
	};
}

using namespace n_collect_file;

#endif
