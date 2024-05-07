#ifndef OCEAN_HARDWARE_H
#define OCEAN_HARDWARE_H

#include "../object.h"

namespace n_ocean_hardware {
	class Cocean_hardware :public Object
	{
	public:
		Cocean_hardware();
		~Cocean_hardware();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_hardware); }
	};
}

using namespace n_ocean_hardware;

#endif
