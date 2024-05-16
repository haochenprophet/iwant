#ifndef HOME_POWER_H
#define HOME_POWER_H

#include "object/object.h"

namespace n_home_power {
	class Chome_power :public Object
	{
	public:
		Chome_power();
		~Chome_power();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_power); }
	};
}

using namespace n_home_power;

#endif
