#ifndef STMXCSR_H
#define STMXCSR_H

#include "object/object.h"

namespace n_STMXCSR {
	class CSTMXCSR :public Object
	{
	public:
		CSTMXCSR();
		~CSTMXCSR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_STMXCSR;

#endif
