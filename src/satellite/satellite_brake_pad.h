#ifndef SATELLITE_BRAKE_PAD_H
#define SATELLITE_BRAKE_PAD_H

#include "object/object.h"

namespace n_satellite_brake_pad {
	class Csatellite_brake_pad :public Object
	{
	public:
		Csatellite_brake_pad();
		~Csatellite_brake_pad();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_brake_pad); }
	};
}

using namespace n_satellite_brake_pad;

#endif
