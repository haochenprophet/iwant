#ifndef POWER_H
#define POWER_H

#include "object.h"

namespace n_power {
	class Cpower :public Object
	{
	public:
		Cpower();
		~Cpower();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cpower); }
	};
}

using namespace n_power;

#endif
