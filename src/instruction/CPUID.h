#ifndef CPUID_H
#define CPUID_H

#include "object/object.h"

namespace n_CPUID {
	class CCPUID :public Object
	{
	public:
		CCPUID();
		~CCPUID();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CPUID;

#endif
