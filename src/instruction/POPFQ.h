#ifndef POPFQ_H
#define POPFQ_H

#include "object/object.h"

namespace n_POPFQ {
	class CPOPFQ :public Object
	{
	public:
		CPOPFQ();
		~CPOPFQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_POPFQ;

#endif
