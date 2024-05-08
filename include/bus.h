#ifndef BUS_H
#define BUS_H

#include "../object.h"

namespace n_bus {
	class Cbus :public Object
	{
	public:
		Cbus();
		~Cbus();
		int my_init(void *p=nullptr);
	};
}

using namespace n_bus;

#endif
