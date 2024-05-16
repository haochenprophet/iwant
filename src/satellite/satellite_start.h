#ifndef SATELLITE_START_H
#define SATELLITE_START_H

#include "object/object.h"

namespace n_satellite_start {
	class Csatellite_start :public Object
	{
	public:
		Csatellite_start();
		~Csatellite_start();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_start); }
	};
}

using namespace n_satellite_start;

#endif
