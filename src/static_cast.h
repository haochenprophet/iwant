#ifndef STATIC_CAST_H
#define STATIC_CAST_H

#include "object.h"

namespace n_static_cast {
	class Cstatic_cast :public Object
	{
	public:
		Cstatic_cast();
		int my_init(void *p=NULL);
	};
}

using namespace n_static_cast;

#endif
