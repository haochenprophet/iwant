#ifndef SECURITY_DEVICE_H
#define SECURITY_DEVICE_H

#include "../object.h"

namespace n_security_device {
	class Csecurity_device :public Object
	{
	public:
		Csecurity_device();
		~Csecurity_device();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_device); }
	};
}

using namespace n_security_device;

#endif
