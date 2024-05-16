#ifndef NATIVE_H
#define NATIVE_H

#include "object/object.h"

namespace n_native {
	class Cnative :public Object
	{
	public:
		Cnative();
		int my_init(void *p=nullptr);
	};
}

using namespace n_native;

#endif
