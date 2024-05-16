#ifndef STEP_H
#define STEP_H

#include "object/object.h"

namespace n_step {
	class Cstep :public Object
	{
	public:
		Cstep();
		int my_init(void *p=nullptr);
	};
}

using namespace n_step;

#endif
