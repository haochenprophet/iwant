#ifndef SECURITY_HARDWARE_H
#define SECURITY_HARDWARE_H

#include "../object.h"

namespace n_security_hardware {
	class Csecurity_hardware :public Object
	{
	public:
		Csecurity_hardware();
		~Csecurity_hardware();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_hardware); }
	};
}

using namespace n_security_hardware;

#endif
