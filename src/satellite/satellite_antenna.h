#ifndef SATELLITE_ANTENNA_H
#define SATELLITE_ANTENNA_H

#include "../object.h"

namespace n_satellite_antenna {
	class Csatellite_antenna :public Object
	{
	public:
		Csatellite_antenna();
		~Csatellite_antenna();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_antenna); }
	};
}

using namespace n_satellite_antenna;

#endif
