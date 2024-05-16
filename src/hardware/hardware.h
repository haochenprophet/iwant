#ifndef HARDWARE_H
#define HARDWARE_H

#include "object/object.h"

namespace n_hardware {
	class Chardware :public Object
	{
	public:
		Chardware();
		~Chardware();
		int my_init(void *p=nullptr);
	};
}

using namespace n_hardware;

#endif
