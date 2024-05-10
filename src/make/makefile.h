#ifndef MAKEFILE_H
#define MAKEFILE_H

#include "object.h"

namespace n_makefile {
	class Cmakefile :public Object
	{
	public:
		Cmakefile();
		int my_init(void *p=nullptr);
	};
}

using namespace n_makefile;

#endif
