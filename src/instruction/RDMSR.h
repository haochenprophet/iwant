#ifndef RDMSR_H
#define RDMSR_H

#include "object.h"

namespace n_RDMSR {
	class CRDMSR :public Object
	{
	public:
		CRDMSR();
		~CRDMSR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RDMSR;

#endif
