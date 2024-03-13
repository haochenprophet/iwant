#ifndef WARSHIP_POWER_H
#define WARSHIP_POWER_H

#include "../object.h"

namespace n_warship_power {
	class Cwarship_power :public Object
	{
	public:
		Cwarship_power();
		~Cwarship_power();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_power); }
	};
}

using namespace n_warship_power;

#endif
