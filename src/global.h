#ifndef GLOBAL_H
#define GLOBAL_H

#include "object.h"

namespace n_global {
	class Cglobal :public Object
	{
	public:
		Cglobal();
		int my_init(void *p=NULL);
	};
}

using namespace n_global;

#endif
