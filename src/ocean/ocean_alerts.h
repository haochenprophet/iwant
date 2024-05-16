#ifndef OCEAN_ALERTS_H
#define OCEAN_ALERTS_H

#include "object/object.h"

namespace n_ocean_alerts {
	class Cocean_alerts :public Object
	{
	public:
		Cocean_alerts();
		~Cocean_alerts();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_alerts); }
	};
}

using namespace n_ocean_alerts;

#endif
