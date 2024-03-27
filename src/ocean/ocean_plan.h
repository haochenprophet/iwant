#ifndef OCEAN_PLAN_H
#define OCEAN_PLAN_H

#include "../object.h"

namespace n_ocean_plan {
	class Cocean_plan :public Object
	{
	public:
		Cocean_plan();
		~Cocean_plan();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_plan); }
	};
}

using namespace n_ocean_plan;

#endif
