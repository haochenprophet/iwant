#ifndef CAR_SAFETY_H
#define CAR_SAFETY_H

#include "object/object.h"

namespace n_car_safety {
	class Ccar_safety :public Object
	{
	public:
		Ccar_safety();
		~Ccar_safety();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_safety); }
	};
}

using namespace n_car_safety;

#endif
