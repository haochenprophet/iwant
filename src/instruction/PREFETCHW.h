#ifndef PREFETCHW_H
#define PREFETCHW_H

#include "object/object.h"

namespace n_PREFETCHW {
	class CPREFETCHW :public Object
	{
	public:
		CPREFETCHW();
		~CPREFETCHW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PREFETCHW;

#endif
