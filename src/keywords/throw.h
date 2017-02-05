#ifndef THROW_H
#define THROW_H

#include "../object.h"

namespace n_throw {
	class Cthrow :public Object
	{
	public:
		Cthrow();
		int my_init(void *p=nullptr);
	};
}

using namespace n_throw;

#endif
