#ifndef OCEAN_REGION_H
#define OCEAN_REGION_H

#include "../object.h"

namespace n_ocean_region {
	class Cocean_region :public Object
	{
	public:
		Cocean_region();
		~Cocean_region();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_region); }
	};
}

using namespace n_ocean_region;

#endif
