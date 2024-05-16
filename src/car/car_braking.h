#ifndef CAR_BRAKING_H
#define CAR_BRAKING_H

#include "object/object.h"

namespace n_car_braking {
	class Ccar_braking :public Object
	{
	public:
		Ccar_braking();
		~Ccar_braking();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_braking); }
	};
}

using namespace n_car_braking;

#endif
