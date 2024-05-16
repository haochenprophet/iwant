#ifndef OCEAN_DEPTH_RADAR_H
#define OCEAN_DEPTH_RADAR_H

#include "object/object.h"

namespace n_ocean_depth_radar {
	class Cocean_depth_radar :public Object
	{
	public:
		Cocean_depth_radar();
		~Cocean_depth_radar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_depth_radar); }
	};
}

using namespace n_ocean_depth_radar;

#endif
