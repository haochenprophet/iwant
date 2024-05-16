#ifndef OCEAN_WARNING_H
#define OCEAN_WARNING_H

#include "object/object.h"

namespace n_ocean_warning {
	class Cocean_warning :public Object
	{
	public:
		Cocean_warning();
		~Cocean_warning();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_warning); }
	};
}

using namespace n_ocean_warning;

#endif
