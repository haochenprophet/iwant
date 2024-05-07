#ifndef OCEAN_PRESSURE_H
#define OCEAN_PRESSURE_H

#include "../object.h"

namespace n_ocean_pressure {
	class Cocean_pressure :public Object
	{
	public:
		Cocean_pressure();
		~Cocean_pressure();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_pressure); }
	};
}

using namespace n_ocean_pressure;

#endif
