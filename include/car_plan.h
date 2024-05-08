#ifndef CAR_PLAN_H
#define CAR_PLAN_H

#include "../object.h"

namespace n_car_plan {
	class Ccar_plan :public Object
	{
	public:
		Ccar_plan();
		~Ccar_plan();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_plan); }
	};
}

using namespace n_car_plan;

#endif
