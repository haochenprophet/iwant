#ifndef REINTERPRET_CAST_H
#define REINTERPRET_CAST_H

#include "object/object.h"

namespace n_reinterpret_cast {
	class Creinterpret_cast :public Object
	{
	public:
		Creinterpret_cast();
		int my_init(void *p=nullptr);
	};
}

using namespace n_reinterpret_cast;

#endif
