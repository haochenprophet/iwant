#ifndef SATELLITE_CHARGE_H
#define SATELLITE_CHARGE_H

#include "../object.h"

namespace n_satellite_charge {
	class Csatellite_charge :public Object
	{
	public:
		Csatellite_charge();
		~Csatellite_charge();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_charge); }
	};
}

using namespace n_satellite_charge;

#endif
