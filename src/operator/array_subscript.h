#ifndef ARRAY_SUBSCRIPT_H
#define ARRAY_SUBSCRIPT_H

#include "operator.h"

namespace n_array_subscript {
	class Carray_subscript :public Coperator
	{
	public:
		Carray_subscript();
		~Carray_subscript();
		int my_init(void *p=nullptr);
	};
}

using namespace n_array_subscript;

#endif
