#ifndef RAISE_H
#define RAISE_H

#include "object/object.h"

namespace n_raise {
	class Craise :public Object
	{
	public:
		Craise();
		int my_init(void *p=nullptr);
	};
}

using namespace n_raise;

#endif
