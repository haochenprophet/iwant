#ifndef DEF_H
#define DEF_H

#include "object/object.h"

namespace n_def {
	class Cdef :public Object
	{
	public:
		Cdef();
		int my_init(void *p=nullptr);
	};
}

using namespace n_def;

#endif
