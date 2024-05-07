#ifndef INTERIOR_PTR_H
#define INTERIOR_PTR_H

#include "../object.h"

namespace n_interior_ptr {
	class Cinterior_ptr :public Object
	{
	public:
		Cinterior_ptr();
		int my_init(void *p=nullptr);
	};
}

using namespace n_interior_ptr;

#endif
