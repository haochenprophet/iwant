#ifndef ROCKET_FUEL_H
#define ROCKET_FUEL_H

#include "../object.h"

namespace n_rocket_fuel {
	class Crocket_fuel :public Object
	{
	public:
		Crocket_fuel();
		~Crocket_fuel();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_fuel); }
	};
}

using namespace n_rocket_fuel;

#endif
