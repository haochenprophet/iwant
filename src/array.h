#ifndef ARRAY_H
#define ARRAY_H

#include "object.h"

namespace n_array {
	class Carray :public Object
	{
	public:
		Carray();
		int my_init(void *p=nullptr);
	};
}

using namespace n_array;

#endif
