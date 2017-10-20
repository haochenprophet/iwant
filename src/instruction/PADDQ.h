#ifndef PADDQ_H
#define PADDQ_H

#include "object.h"

namespace n_PADDQ {
	class CPADDQ :public Object
	{
	public:
		CPADDQ();
		~CPADDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PADDQ;

#endif
