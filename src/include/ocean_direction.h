#ifndef OCEAN_DIRECTION_H
#define OCEAN_DIRECTION_H

#include "../object.h"

namespace n_ocean_direction {
	class Cocean_direction :public Object
	{
	public:
		Cocean_direction();
		~Cocean_direction();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_direction); }
	};
}

using namespace n_ocean_direction;

#endif
