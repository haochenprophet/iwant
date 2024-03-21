#ifndef SATELLITE_ALERTS_H
#define SATELLITE_ALERTS_H

#include "../object.h"

namespace n_satellite_alerts {
	class Csatellite_alerts :public Object
	{
	public:
		Csatellite_alerts();
		~Csatellite_alerts();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_alerts); }
	};
}

using namespace n_satellite_alerts;

#endif
