#ifndef SATELLITE_ELECTRICITY_H
#define SATELLITE_ELECTRICITY_H

#include "object/object.h"

namespace n_satellite_electricity {
	class Csatellite_electricity :public Object
	{
	public:
		Csatellite_electricity();
		~Csatellite_electricity();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_electricity); }
	};
}

using namespace n_satellite_electricity;

#endif
