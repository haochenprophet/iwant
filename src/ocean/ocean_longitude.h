#ifndef OCEAN_LONGITUDE_H
#define OCEAN_LONGITUDE_H

#include "object/object.h"

namespace n_ocean_longitude {
	class Cocean_longitude :public Object
	{
	public:
		Cocean_longitude();
		~Cocean_longitude();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_longitude); }
	};
}

using namespace n_ocean_longitude;

#endif
