#ifndef SATELLITE_LIGHT_H
#define SATELLITE_LIGHT_H

#include "../object.h"

namespace n_satellite_light {
	class Csatellite_light :public Object
	{
	public:
		Csatellite_light();
		~Csatellite_light();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_light); }
	};
}

using namespace n_satellite_light;

#endif
