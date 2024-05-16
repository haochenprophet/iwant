#ifndef OCEAN_STATUS_H
#define OCEAN_STATUS_H

#include "object/object.h"

namespace n_ocean_status {
	class Cocean_status :public Object
	{
	public:
		Cocean_status();
		~Cocean_status();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_status); }
	};
}

using namespace n_ocean_status;

#endif
