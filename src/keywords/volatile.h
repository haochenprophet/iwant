#ifndef VOLATILE_H
#define VOLATILE_H

#include "object/object.h"

namespace n_volatile {
	class Cvolatile :public Object
	{
	public:
		Cvolatile();
		int my_init(void *p=nullptr);
	};
}

using namespace n_volatile;

#endif
