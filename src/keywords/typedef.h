#ifndef TYPEDEF_H
#define TYPEDEF_H

#include "object/object.h"

namespace n_typedef {
	class Ctypedef :public Object
	{
	public:
		Ctypedef();
		int my_init(void *p=nullptr);
	};
}

using namespace n_typedef;

#endif
