#ifndef OCEAN_WIND_H
#define OCEAN_WIND_H

#include "object/object.h"

namespace n_ocean_wind {
	class Cocean_wind :public Object
	{
	public:
		Cocean_wind();
		~Cocean_wind();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_wind); }
	};
}

using namespace n_ocean_wind;

#endif
