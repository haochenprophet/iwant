#ifndef SATELLITE_ELECTRIC_APPLIANCE_H
#define SATELLITE_ELECTRIC_APPLIANCE_H

#include "object/object.h"

namespace n_satellite_electric_appliance {
	class Csatellite_electric_appliance :public Object
	{
	public:
		Csatellite_electric_appliance();
		~Csatellite_electric_appliance();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_electric_appliance); }
	};
}

using namespace n_satellite_electric_appliance;

#endif
