#ifndef CAR_FIRE_H
#define CAR_FIRE_H

#include "object/object.h"

namespace n_car_fire {
	class Ccar_fire :public Object
	{
	public:
		Ccar_fire();
		~Ccar_fire();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_fire); }
	};
}

using namespace n_car_fire;

#endif
