#ifndef NULLPTR_H
#define NULLPTR_H

#include "object/object.h"

namespace n_nullptr {
	class Cnullptr :public Object
	{
	public:
		Cnullptr();
		int my_init(void *p=nullptr);
	};
}

using namespace n_nullptr;

#endif
