#ifndef SATELLITE_STOP_H
#define SATELLITE_STOP_H

#include "object/object.h"

namespace n_satellite_stop {
	class Csatellite_stop :public Object
	{
	public:
		Csatellite_stop();
		~Csatellite_stop();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_stop); }
	};
}

using namespace n_satellite_stop;

#endif
