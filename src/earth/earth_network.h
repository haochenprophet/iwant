#ifndef EARTH_NETWORK_H
#define EARTH_NETWORK_H

#include "object/object.h"

namespace n_earth_network {
	class Cearth_network :public Object
	{
	public:
		Cearth_network();
		~Cearth_network();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_network); }
	};
}

using namespace n_earth_network;

#endif
