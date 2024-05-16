#ifndef OCEAN_BROADCAST_H
#define OCEAN_BROADCAST_H

#include "object/object.h"

namespace n_ocean_broadcast {
	class Cocean_broadcast :public Object
	{
	public:
		Cocean_broadcast();
		~Cocean_broadcast();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_broadcast); }
	};
}

using namespace n_ocean_broadcast;

#endif
