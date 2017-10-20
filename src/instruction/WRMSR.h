#ifndef WRMSR_H
#define WRMSR_H

#include "object.h"

namespace n_WRMSR {
	class CWRMSR :public Object
	{
	public:
		CWRMSR();
		~CWRMSR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_WRMSR;

#endif
