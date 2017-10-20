#ifndef POPA_H
#define POPA_H

#include "object.h"

namespace n_POPA {
	class CPOPA :public Object
	{
	public:
		CPOPA();
		~CPOPA();
		int my_init(void *p=nullptr);
	};
}

using namespace n_POPA;

#endif
