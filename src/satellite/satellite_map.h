#ifndef SATELLITE_MAP_H
#define SATELLITE_MAP_H

#include "object/object.h"

namespace n_satellite_map {
	class Csatellite_map :public Object
	{
	public:
		Csatellite_map();
		~Csatellite_map();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_map); }
	};
}

using namespace n_satellite_map;

#endif
