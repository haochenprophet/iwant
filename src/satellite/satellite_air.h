#ifndef SATELLITE_AIR_H
#define SATELLITE_AIR_H

#include "../object.h"

namespace n_satellite_air {
	class Csatellite_air :public Object
	{
	public:
		Csatellite_air();
		~Csatellite_air();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_air); }
	};
}

using namespace n_satellite_air;

#endif
