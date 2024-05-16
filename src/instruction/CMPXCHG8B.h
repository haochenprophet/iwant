#ifndef CMPXCHG8B_H
#define CMPXCHG8B_H

#include "object/object.h"

namespace n_CMPXCHG8B {
	class CCMPXCHG8B :public Object
	{
	public:
		CCMPXCHG8B();
		~CCMPXCHG8B();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMPXCHG8B;

#endif
