#ifndef GENERIC_H
#define GENERIC_H

#include "object/object.h"

namespace n_generic {
	class Cgeneric :public Object
	{
	public:
		Cgeneric();
		int my_init(void *p=nullptr);
	};
}

using namespace n_generic;

#endif
