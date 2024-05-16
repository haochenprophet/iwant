#ifndef OCEAN_CONTROL_H
#define OCEAN_CONTROL_H

#include "object/object.h"

namespace n_ocean_control {
	class Cocean_control :public Object
	{
	public:
		Cocean_control();
		~Cocean_control();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_control); }
	};
}

using namespace n_ocean_control;

#endif
