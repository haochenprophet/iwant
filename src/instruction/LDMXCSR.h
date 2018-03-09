#ifndef LDMXCSR_H
#define LDMXCSR_H

#include "../object.h"

namespace n_LDMXCSR {
	class CLDMXCSR :public Object
	{
	public:
		CLDMXCSR();
		~CLDMXCSR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LDMXCSR;

#endif
