#ifndef HOME_PLANT_H
#define HOME_PLANT_H

#include "../object.h"

namespace n_home_plant {
	class Chome_plant :public Object
	{
	public:
		Chome_plant();
		~Chome_plant();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_plant); }
	};
}

using namespace n_home_plant;

#endif
