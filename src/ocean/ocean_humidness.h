#ifndef OCEAN_HUMIDNESS_H
#define OCEAN_HUMIDNESS_H

#include "object/object.h"

namespace n_ocean_humidness {
	class Cocean_humidness :public Object
	{
	public:
		Cocean_humidness();
		~Cocean_humidness();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_humidness); }
	};
}

using namespace n_ocean_humidness;

#endif
