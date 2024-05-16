#ifndef SATELLITE_ABS_H
#define SATELLITE_ABS_H

#include "object/object.h"

namespace n_satellite_abs {
	class Csatellite_abs :public Object
	{
	public:
		Csatellite_abs();
		~Csatellite_abs();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_abs); }
	};
}

using namespace n_satellite_abs;

#endif
