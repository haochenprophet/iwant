#ifndef USE_H
#define USE_H

#include "object.h"

namespace n_use {
	class Cuse :public Object
	{
	public:
		Cuse();
		int my_init(void *p=NULL);
	};
}

using namespace n_use;

#endif
