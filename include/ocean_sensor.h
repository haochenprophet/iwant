#ifndef OCEAN_SENSOR_H
#define OCEAN_SENSOR_H

#include "../object.h"

namespace n_ocean_sensor {
	class Cocean_sensor :public Object
	{
	public:
		Cocean_sensor();
		~Cocean_sensor();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_sensor); }
	};
}

using namespace n_ocean_sensor;

#endif
