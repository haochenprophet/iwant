#ifndef OCEAN_RADAR_H
#define OCEAN_RADAR_H

#include "../object.h"

namespace n_ocean_radar {
	class Cocean_radar :public Object
	{
	public:
		Cocean_radar();
		~Cocean_radar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_radar); }
	};
}

using namespace n_ocean_radar;

#endif
