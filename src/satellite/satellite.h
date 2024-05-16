#ifndef SATELLITE_H
#define SATELLITE_H

#include "object/object.h"

namespace n_satellite {
	class Csatellite :public Object
	{
	public:
		Csatellite();
		~Csatellite();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite); }
	};
}

using namespace n_satellite;

#endif
