#ifndef SATELLITE_STEER_H
#define SATELLITE_STEER_H

#include "object/object.h"

namespace n_satellite_steer {
	class Csatellite_steer :public Object
	{
	public:
		Csatellite_steer();
		~Csatellite_steer();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_steer); }
	};
}

using namespace n_satellite_steer;

#endif
