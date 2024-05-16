#ifndef MARS_NETWORK_H
#define MARS_NETWORK_H

#include "object/object.h"

namespace n_mars_network {
	class Cmars_network :public Object
	{
	public:
		Cmars_network();
		~Cmars_network();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_network); }
	};
}

using namespace n_mars_network;

#endif
