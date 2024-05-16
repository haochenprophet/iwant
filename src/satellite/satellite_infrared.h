#ifndef SATELLITE_INFRARED_H
#define SATELLITE_INFRARED_H

#include "object/object.h"

namespace n_satellite_infrared {
	class Csatellite_infrared :public Object
	{
	public:
		Csatellite_infrared();
		~Csatellite_infrared();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_infrared); }
	};
}

using namespace n_satellite_infrared;

#endif
