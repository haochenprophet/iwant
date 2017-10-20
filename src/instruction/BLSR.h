#ifndef BLSR_H
#define BLSR_H

#include "object.h"

namespace n_BLSR {
	class CBLSR :public Object
	{
	public:
		CBLSR();
		~CBLSR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BLSR;

#endif
