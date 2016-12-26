#ifndef NOTHROW_H
#define NOTHROW_H

#include "object.h"

namespace n_nothrow {
	class Cnothrow :public Object
	{
	public:
		Cnothrow();
		int my_init(void *p=nullptr);
	};
}

using namespace n_nothrow;

#endif
