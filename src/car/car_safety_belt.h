#ifndef CAR_SAFETY_BELT_H
#define CAR_SAFETY_BELT_H

#include "object/object.h"

namespace n_car_safety_belt {
	class Ccar_safety_belt :public Object
	{
	public:
		Ccar_safety_belt();
		~Ccar_safety_belt();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_safety_belt); }
	};
}

using namespace n_car_safety_belt;

#endif
