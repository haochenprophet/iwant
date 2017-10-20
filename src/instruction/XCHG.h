#ifndef XCHG_H
#define XCHG_H

#include "object.h"

namespace n_XCHG {
	class CXCHG :public Object
	{
	public:
		CXCHG();
		~CXCHG();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XCHG;

#endif
