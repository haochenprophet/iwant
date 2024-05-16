#ifndef PHADDD_H
#define PHADDD_H

#include "object/object.h"

namespace n_PHADDD {
	class CPHADDD :public Object
	{
	public:
		CPHADDD();
		~CPHADDD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PHADDD;

#endif
