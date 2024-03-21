#ifndef SATELLITE_POWER_ON_H
#define SATELLITE_POWER_ON_H

#include "../object.h"

namespace n_satellite_power_on {
	class Csatellite_power_on :public Object
	{
	public:
		Csatellite_power_on();
		~Csatellite_power_on();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_power_on); }
	};
}

using namespace n_satellite_power_on;

#endif
