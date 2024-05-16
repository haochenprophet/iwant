#ifndef FUNCTION_H
#define FUNCTION_H

#include "object/object.h"

namespace n_function {
	class Cfunction :public Object
	{
	public:
		Cfunction();
		int my_init(void *p=nullptr);
	};
}

using namespace n_function;

#endif
