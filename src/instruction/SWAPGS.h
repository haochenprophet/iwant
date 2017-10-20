#ifndef SWAPGS_H
#define SWAPGS_H

#include "object.h"

namespace n_SWAPGS {
	class CSWAPGS :public Object
	{
	public:
		CSWAPGS();
		~CSWAPGS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SWAPGS;

#endif
