#ifndef PLAN_H
#define PLAN_H

#include "object/object.h"

namespace n_plan {
	class Cplan :public Object
	{
	public:
		Cplan();
		~Cplan();
		int my_init(void *p=nullptr);
	};
}

using namespace n_plan;

#endif
