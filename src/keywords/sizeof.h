#ifndef SIZEOF_H
#define SIZEOF_H

#include "object/object.h"

namespace n_sizeof {
	class Csizeof :public Object
	{
	public:
		Csizeof();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sizeof;

#endif
