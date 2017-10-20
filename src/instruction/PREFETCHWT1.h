#ifndef PREFETCHWT1_H
#define PREFETCHWT1_H

#include "object.h"

namespace n_PREFETCHWT1 {
	class CPREFETCHWT1 :public Object
	{
	public:
		CPREFETCHWT1();
		~CPREFETCHWT1();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PREFETCHWT1;

#endif
