#ifndef CAR_VOLTAGE_H
#define CAR_VOLTAGE_H

#include "object/object.h"

namespace n_car_voltage {
	class Ccar_voltage :public Object
	{
	public:
		Ccar_voltage();
		~Ccar_voltage();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_voltage); }
	};
}

using namespace n_car_voltage;

#endif
