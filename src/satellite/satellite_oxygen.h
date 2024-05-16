#ifndef SATELLITE_OXYGEN_H
#define SATELLITE_OXYGEN_H

#include "object/object.h"

namespace n_satellite_oxygen {
	class Csatellite_oxygen :public Object
	{
	public:
		Csatellite_oxygen();
		~Csatellite_oxygen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_oxygen); }
	};
}

using namespace n_satellite_oxygen;

#endif
