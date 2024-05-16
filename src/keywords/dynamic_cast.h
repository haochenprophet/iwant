#ifndef DYNAMIC_CAST_H
#define DYNAMIC_CAST_H

#include "object/object.h"

namespace n_dynamic_cast {
	class Cdynamic_cast :public Object
	{
	public:
		Cdynamic_cast();
		int my_init(void *p=nullptr);
	};
}

using namespace n_dynamic_cast;

#endif
