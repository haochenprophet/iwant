#ifndef PREFETCHH_H
#define PREFETCHH_H

#include "object.h"

namespace n_PREFETCHh {
	class CPREFETCHh :public Object
	{
	public:
		CPREFETCHh();
		~CPREFETCHh();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PREFETCHh;

#endif
