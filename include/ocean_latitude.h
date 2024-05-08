#ifndef OCEAN_LATITUDE_H
#define OCEAN_LATITUDE_H

#include "../object.h"

namespace n_ocean_latitude {
	class Cocean_latitude :public Object
	{
	public:
		Cocean_latitude();
		~Cocean_latitude();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_latitude); }
	};
}

using namespace n_ocean_latitude;

#endif
