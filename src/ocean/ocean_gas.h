#ifndef OCEAN_GAS_H
#define OCEAN_GAS_H

#include "object/object.h"

namespace n_ocean_gas {
	class Cocean_gas :public Object
	{
	public:
		Cocean_gas();
		~Cocean_gas();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_gas); }
	};
}

using namespace n_ocean_gas;

#endif
