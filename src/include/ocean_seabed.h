#ifndef OCEAN_SEABED_H
#define OCEAN_SEABED_H

#include "../object.h"

namespace n_ocean_seabed {
	class Cocean_seabed :public Object
	{
	public:
		Cocean_seabed();
		~Cocean_seabed();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_seabed); }
	};
}

using namespace n_ocean_seabed;

#endif
