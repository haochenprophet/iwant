#ifndef SATELLITE_ELECTRIC_CURRENT_H
#define SATELLITE_ELECTRIC_CURRENT_H

#include "object/object.h"

namespace n_satellite_electric_current {
	class Csatellite_electric_current :public Object
	{
	public:
		Csatellite_electric_current();
		~Csatellite_electric_current();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_electric_current); }
	};
}

using namespace n_satellite_electric_current;

#endif
