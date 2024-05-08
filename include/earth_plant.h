#ifndef EARTH_PLANT_H
#define EARTH_PLANT_H

#include "../object.h"

namespace n_earth_plant {
	class Cearth_plant :public Object
	{
	public:
		Cearth_plant();
		~Cearth_plant();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_plant); }
	};
}

using namespace n_earth_plant;

#endif
