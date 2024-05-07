#ifndef SECURITY_NETWORK_H
#define SECURITY_NETWORK_H

#include "../object.h"

namespace n_security_network {
	class Csecurity_network :public Object
	{
	public:
		Csecurity_network();
		~Csecurity_network();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_network); }
	};
}

using namespace n_security_network;

#endif
