#ifndef CALLABLE_H
#define CALLABLE_H

#include "object/object.h"

namespace n_callable {
	class Ccallable :public Object
	{
	public:
		Ccallable();
		int my_init(void *p=nullptr);
	};
}

using namespace n_callable;

#endif
