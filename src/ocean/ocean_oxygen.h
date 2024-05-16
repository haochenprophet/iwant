#ifndef OCEAN_OXYGEN_H
#define OCEAN_OXYGEN_H

#include "object/object.h"

namespace n_ocean_oxygen {
	class Cocean_oxygen :public Object
	{
	public:
		Cocean_oxygen();
		~Cocean_oxygen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_oxygen); }
	};
}

using namespace n_ocean_oxygen;

#endif
