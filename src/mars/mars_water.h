#ifndef MARS_WATER_H
#define MARS_WATER_H

#include "../object.h"

namespace n_mars_water {
	class Cmars_water :public Object
	{
	public:
		Cmars_water();
		~Cmars_water();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_water); }
	};
}

using namespace n_mars_water;

#endif
