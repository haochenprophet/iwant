#ifndef NONLOCAL_H
#define NONLOCAL_H

#include "object.h"

namespace n_nonlocal {
	class Cnonlocal :public Object
	{
	public:
		Cnonlocal();
		int my_init(void *p=nullptr);
	};
}

using namespace n_nonlocal;

#endif
