#ifndef STATIC_H
#define STATIC_H

#include "object.h"

namespace n_static {
	class Cstatic :public Object
	{
	public:
		Cstatic();
		int my_init(void *p=nullptr);
	};
}

using namespace n_static;

#endif
