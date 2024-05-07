#ifndef FUNC_H
#define FUNC_H

#include "object.h"

namespace n_func {
	class Cfunc :public Object
	{
	public:
		Cfunc();
		~Cfunc();
		int my_init(void *p=nullptr);
	};
}

using namespace n_func;

#endif
