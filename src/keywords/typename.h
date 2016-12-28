#ifndef TYPENAME_H
#define TYPENAME_H

#include "object.h"

namespace n_typename {
	class Ctypename :public Object
	{
	public:
		Ctypename();
		int my_init(void *p=nullptr);
	};
}

using namespace n_typename;

#endif
