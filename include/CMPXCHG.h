#ifndef CMPXCHG_H
#define CMPXCHG_H

#include "../object.h"

namespace n_CMPXCHG {
	class CCMPXCHG :public Object
	{
	public:
		CCMPXCHG();
		~CCMPXCHG();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMPXCHG;

#endif
