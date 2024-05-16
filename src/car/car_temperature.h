#ifndef CAR_TEMPERATURE_H
#define CAR_TEMPERATURE_H

#include "object/object.h"

namespace n_car_temperature {
	class Ccar_temperature :public Object
	{
	public:
		Ccar_temperature();
		~Ccar_temperature();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_temperature); }
	};
}

using namespace n_car_temperature;

#endif
