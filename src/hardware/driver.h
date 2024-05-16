#ifndef DRIVER_H
#define DRIVER_H

#include "object/object.h"

namespace n_driver {
	class Cdriver :public Object
	{
	public:
		Cdriver();
		~Cdriver();
		int my_init(void *p=nullptr);
	};
}

using namespace n_driver;

#endif
