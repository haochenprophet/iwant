#ifndef EARTH_FOOD_H
#define EARTH_FOOD_H

#include "../object.h"

namespace n_earth_food {
	class Cearth_food :public Object
	{
	public:
		Cearth_food();
		~Cearth_food();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_food); }
	};
}

using namespace n_earth_food;

#endif
