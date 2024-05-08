#ifndef EARTH_TEMPERATURE_H
#define EARTH_TEMPERATURE_H

#include "../object.h"

namespace n_earth_temperature {
	class Cearth_temperature :public Object
	{
	public:
		Cearth_temperature();
		~Cearth_temperature();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_temperature); }
	};
}

using namespace n_earth_temperature;

#endif
