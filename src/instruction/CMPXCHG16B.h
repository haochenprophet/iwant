#ifndef CMPXCHG16B_H
#define CMPXCHG16B_H

#include "object.h"

namespace n_CMPXCHG16B {
	class CCMPXCHG16B :public Object
	{
	public:
		CCMPXCHG16B();
		~CCMPXCHG16B();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMPXCHG16B;

#endif
