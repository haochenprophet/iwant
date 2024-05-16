#ifndef OCEAN_VOLTAGE_H
#define OCEAN_VOLTAGE_H

#include "object/object.h"

namespace n_ocean_voltage {
	class Cocean_voltage :public Object
	{
	public:
		Cocean_voltage();
		~Cocean_voltage();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_voltage); }
	};
}

using namespace n_ocean_voltage;

#endif
