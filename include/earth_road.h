#ifndef EARTH_ROAD_H
#define EARTH_ROAD_H

#include "../object.h"

namespace n_earth_road {
	class Cearth_road :public Object
	{
	public:
		Cearth_road();
		~Cearth_road();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_road); }
	};
}

using namespace n_earth_road;

#endif
