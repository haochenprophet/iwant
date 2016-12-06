#ifndef UNSIGNED_H
#define UNSIGNED_H

#include "object.h"

namespace n_unsigned {
	class Cunsigned :public Object
	{
	public:
		Cunsigned();
		int my_init(void *p=NULL);
	};
}

using namespace n_unsigned;

#endif
