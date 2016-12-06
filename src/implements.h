#ifndef IMPLEMENTS_H
#define IMPLEMENTS_H

#include "object.h"

namespace n_implements {
	class Cimplements :public Object
	{
	public:
		Cimplements();
		int my_init(void *p=NULL);
	};
}

using namespace n_implements;

#endif
