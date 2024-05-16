#ifndef OCEAN_TEMPERATURE_H
#define OCEAN_TEMPERATURE_H

#include "object/object.h"

namespace n_ocean_temperature {
	class Cocean_temperature :public Object
	{
	public:
		Cocean_temperature();
		~Cocean_temperature();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_temperature); }
	};
}

using namespace n_ocean_temperature;

#endif
