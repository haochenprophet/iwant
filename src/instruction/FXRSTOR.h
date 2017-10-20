#ifndef FXRSTOR_H
#define FXRSTOR_H

#include "object.h"

namespace n_FXRSTOR {
	class CFXRSTOR :public Object
	{
	public:
		CFXRSTOR();
		~CFXRSTOR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FXRSTOR;

#endif
