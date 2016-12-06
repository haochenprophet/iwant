#ifndef NULLPTR_H
#define NULLPTR_H

#include "object.h"

namespace n_nullptr {
	class Cnullptr :public Object
	{
	public:
		Cnullptr();
		int my_init(void *p=NULL);
	};
}

using namespace n_nullptr;

#endif
