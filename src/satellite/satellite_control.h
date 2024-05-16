#ifndef SATELLITE_CONTROL_H
#define SATELLITE_CONTROL_H

#include "object/object.h"

namespace n_satellite_control {
	class Csatellite_control :public Object
	{
	public:
		Csatellite_control();
		~Csatellite_control();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_control); }
	};
}

using namespace n_satellite_control;

#endif
