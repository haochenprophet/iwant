#ifndef OCEAN_SALINITY_H
#define OCEAN_SALINITY_H

#include "object/object.h"

namespace n_ocean_salinity {
	class Cocean_salinity :public Object
	{
	public:
		Cocean_salinity();
		~Cocean_salinity();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_salinity); }
	};
}

using namespace n_ocean_salinity;

#endif
