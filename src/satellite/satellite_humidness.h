#ifndef SATELLITE_HUMIDNESS_H
#define SATELLITE_HUMIDNESS_H

#include "object/object.h"

namespace n_satellite_humidness {
	class Csatellite_humidness :public Object
	{
	public:
		Csatellite_humidness();
		~Csatellite_humidness();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_humidness); }
	};
}

using namespace n_satellite_humidness;

#endif
