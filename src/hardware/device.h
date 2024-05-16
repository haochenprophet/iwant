#ifndef DEVICE_H
#define DEVICE_H

#include "object/object.h"

namespace n_device {
	class Cdevice :public Object
	{
	public:
		Cdevice();
		~Cdevice();
		int my_init(void *p=nullptr);
	};
}

using namespace n_device;

#endif
