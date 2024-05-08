#ifndef OCEAN_GPS_H
#define OCEAN_GPS_H

#include "../object.h"

namespace n_ocean_gps {
	class Cocean_gps :public Object
	{
	public:
		Cocean_gps();
		~Cocean_gps();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_gps); }
	};
}

using namespace n_ocean_gps;

#endif
