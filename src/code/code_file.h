#ifndef CODE_FILE_H
#define CODE_FILE_H

#include "object/object.h"

namespace n_code_file {
	class Ccode_file :public Object
	{
	public:
		Ccode_file();
		~Ccode_file();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_file); }
	};
}

using namespace n_code_file;

#endif
