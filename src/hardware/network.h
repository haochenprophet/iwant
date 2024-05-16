#ifndef NETWORK_H
#define NETWORK_H

#include "object/object.h"

namespace n_network {
	class Cnetwork :public Object
	{
	public:
		Cnetwork();
		~Cnetwork();
		int my_init(void *p=nullptr);
	};
}

using namespace n_network;

#endif
