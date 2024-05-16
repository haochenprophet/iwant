#ifndef SPACEPORT_DEVICE_H
#define SPACEPORT_DEVICE_H

#include "object/object.h"

namespace n_spaceport_device {
	class Cspaceport_device :public Object
	{
	public:
		Cspaceport_device();
		~Cspaceport_device();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_device); }
	};
}

using namespace n_spaceport_device;

#endif
