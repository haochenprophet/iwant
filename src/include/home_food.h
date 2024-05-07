#ifndef HOME_FOOD_H
#define HOME_FOOD_H

#include "../object.h"

namespace n_home_food {
	class Chome_food :public Object
	{
	public:
		Chome_food();
		~Chome_food();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_food); }
	};
}

using namespace n_home_food;

#endif
