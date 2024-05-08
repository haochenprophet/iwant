#ifndef OCEAN_LOCATION_H
#define OCEAN_LOCATION_H

#include "../object.h"

namespace n_ocean_location {
	class Cocean_location :public Object
	{
	public:
		Cocean_location();
		~Cocean_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_location); }
	};
}

using namespace n_ocean_location;

#endif
