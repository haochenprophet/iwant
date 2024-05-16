#ifndef CODE_MAKEFILE_H
#define CODE_MAKEFILE_H

#include "object/object.h"

namespace n_code_makefile {
	class Ccode_makefile :public Object
	{
	public:
		Ccode_makefile();
		~Ccode_makefile();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_makefile); }
	};
}

using namespace n_code_makefile;

#endif
