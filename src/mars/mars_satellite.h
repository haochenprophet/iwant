#ifndef MARS_SATELLITE_H
#define MARS_SATELLITE_H

#include "object/object.h"

namespace n_mars_satellite {
	class Cmars_satellite :public Object
	{
	public:
		Cmars_satellite();
		~Cmars_satellite();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_satellite); }
	};
}

using namespace n_mars_satellite;

#endif
