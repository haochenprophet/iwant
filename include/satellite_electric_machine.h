#ifndef SATELLITE_ELECTRIC_MACHINE_H
#define SATELLITE_ELECTRIC_MACHINE_H

#include "../object.h"

namespace n_satellite_electric_machine {
	class Csatellite_electric_machine :public Object
	{
	public:
		Csatellite_electric_machine();
		~Csatellite_electric_machine();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_electric_machine); }
	};
}

using namespace n_satellite_electric_machine;

#endif
