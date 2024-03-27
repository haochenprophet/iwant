#ifndef OCEAN_ALTITUDE_H
#define OCEAN_ALTITUDE_H

#include "../object.h"

namespace n_ocean_altitude {
	class Cocean_altitude :public Object
	{
	public:
		Cocean_altitude();
		~Cocean_altitude();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_altitude); }
	};
}

using namespace n_ocean_altitude;

#endif
