#ifndef HOME_DEVICE_H
#define HOME_DEVICE_H

#include "object/object.h"

namespace n_home_device {
	class Chome_device :public Object
	{
	public:
		Chome_device();
		~Chome_device();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_device); }
	};
}

using namespace n_home_device;

#endif
