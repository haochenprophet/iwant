#ifndef CAR_SENSOR_H
#define CAR_SENSOR_H

#include "object/object.h"

namespace n_car_sensor {
	class Ccar_sensor :public Object
	{
	public:
		Ccar_sensor();
		~Ccar_sensor();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_sensor); }
	};
}

using namespace n_car_sensor;

#endif
