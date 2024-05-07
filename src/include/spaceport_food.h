#ifndef SPACEPORT_FOOD_H
#define SPACEPORT_FOOD_H

#include "../object.h"

namespace n_spaceport_food {
	class Cspaceport_food :public Object
	{
	public:
		Cspaceport_food();
		~Cspaceport_food();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_food); }
	};
}

using namespace n_spaceport_food;

#endif
