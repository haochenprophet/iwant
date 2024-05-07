#ifndef HOME_WATER_H
#define HOME_WATER_H

#include "../object.h"

namespace n_home_water {
	class Chome_water :public Object
	{
	public:
		Chome_water();
		~Chome_water();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_water); }
	};
}

using namespace n_home_water;

#endif
