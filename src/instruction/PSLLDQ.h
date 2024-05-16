#ifndef PSLLDQ_H
#define PSLLDQ_H

#include "object/object.h"

namespace n_PSLLDQ {
	class CPSLLDQ :public Object
	{
	public:
		CPSLLDQ();
		~CPSLLDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSLLDQ;

#endif
