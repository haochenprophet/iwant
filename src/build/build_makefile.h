#ifndef BUILD_MAKEFILE_H
#define BUILD_MAKEFILE_H

#include "object.h"

namespace n_build_makefile {
	class Cbuild_makefile :public Object
	{
	public:
		Cbuild_makefile();
		~Cbuild_makefile();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cbuild_makefile); }
	};
}

using namespace n_build_makefile;

#endif
