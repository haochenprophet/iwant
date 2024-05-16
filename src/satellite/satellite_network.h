#ifndef SATELLITE_NETWORK_H
#define SATELLITE_NETWORK_H

#include "object/object.h"

namespace n_satellite_network {
	class Csatellite_network :public Object
	{
	public:
		Csatellite_network();
		~Csatellite_network();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_network); }
	};
}

using namespace n_satellite_network;

#endif
