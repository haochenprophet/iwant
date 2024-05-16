#ifndef OCEAN_RESCUE_H
#define OCEAN_RESCUE_H

#include "object/object.h"

namespace n_ocean_rescue {
	class Cocean_rescue :public Object
	{
	public:
		Cocean_rescue();
		~Cocean_rescue();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_rescue); }
	};
}

using namespace n_ocean_rescue;

#endif
