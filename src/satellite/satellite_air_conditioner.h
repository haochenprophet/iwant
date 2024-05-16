#ifndef SATELLITE_AIR_CONDITIONER_H
#define SATELLITE_AIR_CONDITIONER_H

#include "object/object.h"

namespace n_satellite_air_conditioner {
	class Csatellite_air_conditioner :public Object
	{
	public:
		Csatellite_air_conditioner();
		~Csatellite_air_conditioner();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_air_conditioner); }
	};
}

using namespace n_satellite_air_conditioner;

#endif
